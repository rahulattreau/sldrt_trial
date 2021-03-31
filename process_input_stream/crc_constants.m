kMaxPacketSize = uint8(4);
kGrdFrameStart = uint8(hex2dec('0xEF'));
kGrdFrameStartSize = uint8(1);
kGrdCmdSize = uint8(1);
kGrdMsgIdSize = uint8(1);
kGrdCrcSize = uint8(1);

%%
% kGrdFrameStart = Simulink.Signal;
% kGrdFrameStart.DataType = 'uint8';
% kGrdFrameStart.InitialValue = num2str(uint8(hex2dec('0xEF')));