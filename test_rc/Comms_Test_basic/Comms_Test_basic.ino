
int rx_char = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {

  if(Serial.available()) {
    
    rx_char = Serial.read();
    Serial.write(rx_char); // Send back the pre-defined packet
    
  }
}
