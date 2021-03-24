

#define GRD_FRAME_HEADER_SIZE (2)
#define GRD_FRAME_CRC_SIZE (1)
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

enum grd_msg_type_t {
  GRD_MSG_TYPE_READ_TEMP = 0,
  GRD_MSG_TYPE_SET_SPEED = 1,
  GRD_MSG_TYPE_MAX
};

#define GRD_CMD_SIZE             (1)
#define CMD_RESP_SIZE_READ_TEMP  (2)
#define CMD_RESP_SIZE_SET_SPEED  (4)


uint8_t processPacket(uint8_t *packet, size_t packet_len, uint8_t *response) {
  uint8_t frame_size = 0;
  
  if(packet_len < 2) {
    return 0;
  }
  uint8_t msg_type = packet[2];

  uint8_t temp_resp[GRD_FRAME_HEADER_SIZE + GRD_CMD_SIZE + CMD_RESP_SIZE_READ_TEMP + GRD_FRAME_CRC_SIZE] = {GRD_FRAME_START, 
    GRD_CMD_SIZE + CMD_RESP_SIZE_READ_TEMP, 
    GRD_MSG_TYPE_READ_TEMP, 
    0x01, 0x02, 
    0x00};
  uint8_t speed_buffer[GRD_FRAME_HEADER_SIZE + GRD_CMD_SIZE + CMD_RESP_SIZE_SET_SPEED + GRD_FRAME_CRC_SIZE] = {
    GRD_FRAME_START, 
    GRD_CMD_SIZE + CMD_RESP_SIZE_SET_SPEED, 
    GRD_MSG_TYPE_SET_SPEED, 
    0x01, 0x02, 0x03, 0x04, 
    0x00};

  switch(msg_type) {
    case grd_msg_type_t::GRD_MSG_TYPE_READ_TEMP:
      frame_size = GRD_FRAME_HEADER_SIZE + GRD_CMD_SIZE + CMD_RESP_SIZE_READ_TEMP + GRD_FRAME_CRC_SIZE;
      temp_resp[frame_size - 1] = computeCRC(temp_resp, frame_size - 1);
      memcpy(response, temp_resp, frame_size);
      break;
    case grd_msg_type_t::GRD_MSG_TYPE_SET_SPEED:
      frame_size = GRD_FRAME_HEADER_SIZE + GRD_CMD_SIZE + CMD_RESP_SIZE_SET_SPEED + GRD_FRAME_CRC_SIZE;
      speed_buffer[frame_size - 1] = computeCRC(speed_buffer, frame_size - 1);
      memcpy(response, speed_buffer, frame_size);
      break;
    default:
      Serial.println("DEFAULT");
      break;
  }
  
  return frame_size;
}

void loop() {
  if(msg_time > MSG_RX_TIMEOUT_MS) {
    //Msg RX Timeout
    idb_rx_ready = true;
    msg_time = 0;
  }

  uint8_t response[255] = {0};

  if(Serial.available()) {
    
    rx_char = Serial.read();
    idb_rx_buffer[idb_byte_count] = rx_char;
    idb_byte_count++;
    
    if(idb_byte_count == 2) {
        idb_payload_length = rx_char;
    }
    
    if(idb_rx_ready && rx_char == GRD_FRAME_START) {
        // Start of frame
        idb_byte_count = 1;
        idb_payload_length = 255;
        idb_rx_ready = false;
        msg_time = millis();
    }
    
    if(idb_byte_count == (GRD_FRAME_HEADER_SIZE + idb_payload_length + GRD_FRAME_CRC_SIZE)) {

        // Compute CRC and validate payload 
        uint8_t crc = computeCRC(idb_rx_buffer, idb_byte_count - 1);
        
        if(crc == idb_rx_buffer[idb_byte_count - 1]) {
            // Valid frame
            // Process packet
            uint8_t resp_len = processPacket((uint8_t *)&idb_rx_buffer, idb_byte_count, (uint8_t *)&response);
            Serial.write(response, resp_len); // Send back the pre-defined packet
        }
        idb_rx_ready = true;
    }
    
  }
}
