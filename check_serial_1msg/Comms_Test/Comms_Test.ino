

#define GRD_FRAME_START (0xEF)
#define MSG_RX_TIMEOUT_MS (100)

uint8_t idb_rx_buffer[255];
uint8_t idb_byte_count = 0;
uint8_t idb_payload_length = 0;
uint8_t rx_char = 0;
bool idb_rx_ready = true;
uint16_t msg_time = 0;

uint8_t computeCRC(uint8_t *buffer, size_t len) {
    uint16_t sum = 0;
    for(int x=0; x < len; x++) {
        sum += buffer[x];
    }
    if (sum <= 0xFF) {
        return sum;
    } else {
        return (sum >> 8) + (sum & 0xFF);
    }
}

void setup() {
  Serial.begin(115200);
}

void loop() {
  if(msg_time > MSG_RX_TIMEOUT_MS) {
    //Msg RX Timeout
    idb_rx_ready = true;
    msg_time = 0;
  }

uint8_t response[5] = {0xEF, 0x03, 0x05, 0x01, 0xF8};

  if(Serial.available()) {
    
    rx_char = Serial.read();
    idb_rx_buffer[idb_byte_count] = rx_char;
    
    if(idb_rx_ready && rx_char == GRD_FRAME_START) {
        // Start of frame
        idb_byte_count = 0;
        idb_payload_length = 255;
        idb_rx_ready = false;
        msg_time = millis();
    }
    if(idb_byte_count == 1) {
        idb_payload_length = rx_char;
    }
    if(idb_byte_count == (idb_payload_length + 1)) {
        // Compute CRC and validate payload
        uint8_t crc = computeCRC(idb_rx_buffer, idb_byte_count);
        if(crc == rx_char) {
            // Valid frame
            // Process packet
            Serial.write(response, 5); // Send back the pre-defined packet
        }
        idb_rx_ready = true;
    }
    idb_byte_count++;
  }
}
