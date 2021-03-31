serial.baud_rate = 115200;
message_poll_num = serial.baud_rate/8 * 0.01; % baud rate divided by number of bits per byte * time step