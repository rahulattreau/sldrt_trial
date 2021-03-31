%=========================================================================%
% Serial RX Params
%=========================================================================%

%% Create data dictionary
Simulink.data.dictionary.create('rx_params.sldd')

%% Define serial protocol parameters
serial.baud_rate = 115200;
message_poll_num = serial.baud_rate/8 * 0.01; % baud rate divided by number of bits per byte * time step

%% Define CRC params
kMaxPacketSize = uint8(4);
kGrdFrameStart = uint8(hex2dec('0xEF'));
kGrdFrameStartSize = uint8(1);
kGrdCmdSize = uint8(1);
kGrdMsgIdSize = uint8(1);
kGrdCrcSize = uint8(1);

%=========================================================================%
% End
%=========================================================================%
