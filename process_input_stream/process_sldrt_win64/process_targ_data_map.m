  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 11;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (process_P)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_P.message_poll_num
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% process_P.kGrdCmdSize
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_P.kGrdCrcSize
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_P.kGrdFrameStart
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% process_P.kGrdFrameStartSize
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
	  ;% process_P.kGrdMsgIdSize
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 4;
	
	  ;% process_P.kMaxPacketSize
	  section.data(6).logicalSrcIdx = 6;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% process_P.PacketInput2_MaxMissedTicks
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_P.PacketOutput_MaxMissedTicks
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_P.PacketOutput1_MaxMissedTicks
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 2;
	
	  ;% process_P.PacketInput2_YieldWhenWaiting
	  section.data(4).logicalSrcIdx = 14;
	  section.data(4).dtTransOffset = 3;
	
	  ;% process_P.PacketOutput_YieldWhenWaiting
	  section.data(5).logicalSrcIdx = 15;
	  section.data(5).dtTransOffset = 4;
	
	  ;% process_P.PacketOutput1_YieldWhenWaiting
	  section.data(6).logicalSrcIdx = 16;
	  section.data(6).dtTransOffset = 5;
	
	  ;% process_P.holder_msgID_0x1_u_p
	  section.data(7).logicalSrcIdx = 17;
	  section.data(7).dtTransOffset = 6;
	
	  ;% process_P.holder_msgID_0x2_u_p
	  section.data(8).logicalSrcIdx = 18;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% process_P.PacketInput2_PacketID
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_P.PacketOutput_PacketID
	  section.data(2).logicalSrcIdx = 20;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_P.PacketOutput1_PacketID
	  section.data(3).logicalSrcIdx = 21;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_P.serial_rx_bus_Outport_2_Y0
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 21;
      section.data(21)  = dumData; %prealloc
      
	  ;% process_P.Constant_Value
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_P.Constant_Value_i
	  section.data(2).logicalSrcIdx = 24;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_P.Constant1_Value
	  section.data(3).logicalSrcIdx = 25;
	  section.data(3).dtTransOffset = 2;
	
	  ;% process_P.Constant2_Value
	  section.data(4).logicalSrcIdx = 26;
	  section.data(4).dtTransOffset = 3;
	
	  ;% process_P.Constant3_Value
	  section.data(5).logicalSrcIdx = 27;
	  section.data(5).dtTransOffset = 4;
	
	  ;% process_P.Constant4_Value
	  section.data(6).logicalSrcIdx = 28;
	  section.data(6).dtTransOffset = 5;
	
	  ;% process_P.Constant5_Value
	  section.data(7).logicalSrcIdx = 29;
	  section.data(7).dtTransOffset = 6;
	
	  ;% process_P.Constant10_Value
	  section.data(8).logicalSrcIdx = 30;
	  section.data(8).dtTransOffset = 7;
	
	  ;% process_P.Constant11_Value
	  section.data(9).logicalSrcIdx = 31;
	  section.data(9).dtTransOffset = 8;
	
	  ;% process_P.Constant12_Value
	  section.data(10).logicalSrcIdx = 32;
	  section.data(10).dtTransOffset = 9;
	
	  ;% process_P.Constant13_Value
	  section.data(11).logicalSrcIdx = 33;
	  section.data(11).dtTransOffset = 10;
	
	  ;% process_P.Constant6_Value
	  section.data(12).logicalSrcIdx = 34;
	  section.data(12).dtTransOffset = 11;
	
	  ;% process_P.Constant7_Value
	  section.data(13).logicalSrcIdx = 35;
	  section.data(13).dtTransOffset = 12;
	
	  ;% process_P.Constant8_Value
	  section.data(14).logicalSrcIdx = 36;
	  section.data(14).dtTransOffset = 13;
	
	  ;% process_P.Constant9_Value
	  section.data(15).logicalSrcIdx = 37;
	  section.data(15).dtTransOffset = 14;
	
	  ;% process_P.ExecutionTime_P1
	  section.data(16).logicalSrcIdx = 38;
	  section.data(16).dtTransOffset = 15;
	
	  ;% process_P.UnitDelay2_InitialCondition
	  section.data(17).logicalSrcIdx = 39;
	  section.data(17).dtTransOffset = 16;
	
	  ;% process_P.Accumulator_gainval
	  section.data(18).logicalSrcIdx = 40;
	  section.data(18).dtTransOffset = 17;
	
	  ;% process_P.Accumulator_IC
	  section.data(19).logicalSrcIdx = 41;
	  section.data(19).dtTransOffset = 18;
	
	  ;% process_P.Bias_Bias
	  section.data(20).logicalSrcIdx = 42;
	  section.data(20).dtTransOffset = 19;
	
	  ;% process_P.Constant18_Value
	  section.data(21).logicalSrcIdx = 43;
	  section.data(21).dtTransOffset = 20;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_P.Accumulator_IC_j
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% process_P.UnitDelay5_InitialCondition
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_P.Constant16_Value
	  section.data(2).logicalSrcIdx = 46;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_P.Constant_Value_n
	  section.data(3).logicalSrcIdx = 47;
	  section.data(3).dtTransOffset = 2;
	
	  ;% process_P.Constant18_Value_a
	  section.data(4).logicalSrcIdx = 48;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(8) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% process_P.tx_Y0
	  section.data(1).logicalSrcIdx = 49;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_P.sum_eight_bit_Y0
	  section.data(2).logicalSrcIdx = 50;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_P.y_Y0
	  section.data(3).logicalSrcIdx = 51;
	  section.data(3).dtTransOffset = 2;
	
	  ;% process_P.UnitDelay_InitialCondition
	  section.data(4).logicalSrcIdx = 52;
	  section.data(4).dtTransOffset = 3;
	
	  ;% process_P.UnitDelay1_InitialCondition
	  section.data(5).logicalSrcIdx = 53;
	  section.data(5).dtTransOffset = 4;
	
	  ;% process_P.UnitDelay2_InitialCondition_m
	  section.data(6).logicalSrcIdx = 54;
	  section.data(6).dtTransOffset = 5;
	
	  ;% process_P.UnitDelay3_InitialCondition
	  section.data(7).logicalSrcIdx = 55;
	  section.data(7).dtTransOffset = 6;
	
	  ;% process_P.UnitDelay4_InitialCondition
	  section.data(8).logicalSrcIdx = 56;
	  section.data(8).dtTransOffset = 7;
	
	  ;% process_P.UnitDelay6_InitialCondition
	  section.data(9).logicalSrcIdx = 57;
	  section.data(9).dtTransOffset = 8;
	
	  ;% process_P.Accumulator_IC_c
	  section.data(10).logicalSrcIdx = 58;
	  section.data(10).dtTransOffset = 9;
	
	  ;% process_P.ResettableDelay_InitialCondition
	  section.data(11).logicalSrcIdx = 59;
	  section.data(11).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_P.TriggeredSubsystem_n.tx_Y0
	  section.data(1).logicalSrcIdx = 60;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_P.TriggeredSubsystem_d.tx_Y0
	  section.data(1).logicalSrcIdx = 61;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(11) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (process_B)
    ;%
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% process_B.ExecutionTime
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_B.Accumulator
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_B.Divide
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_B.missed_ticks
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_B.Accumulator_i
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 21;
      section.data(21)  = dumData; %prealloc
      
	  ;% process_B.DataTypeConversion
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_B.DataTypeConversion1
	  section.data(2).logicalSrcIdx = 6;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_B.DataTypeConversion2
	  section.data(3).logicalSrcIdx = 7;
	  section.data(3).dtTransOffset = 2;
	
	  ;% process_B.DataTypeConversion3
	  section.data(4).logicalSrcIdx = 8;
	  section.data(4).dtTransOffset = 3;
	
	  ;% process_B.DataTypeConversion4
	  section.data(5).logicalSrcIdx = 9;
	  section.data(5).dtTransOffset = 4;
	
	  ;% process_B.DataTypeConversion5
	  section.data(6).logicalSrcIdx = 10;
	  section.data(6).dtTransOffset = 5;
	
	  ;% process_B.DataTypeConversion10
	  section.data(7).logicalSrcIdx = 11;
	  section.data(7).dtTransOffset = 6;
	
	  ;% process_B.DataTypeConversion11
	  section.data(8).logicalSrcIdx = 12;
	  section.data(8).dtTransOffset = 7;
	
	  ;% process_B.DataTypeConversion12
	  section.data(9).logicalSrcIdx = 13;
	  section.data(9).dtTransOffset = 8;
	
	  ;% process_B.DataTypeConversion13
	  section.data(10).logicalSrcIdx = 14;
	  section.data(10).dtTransOffset = 9;
	
	  ;% process_B.DataTypeConversion6
	  section.data(11).logicalSrcIdx = 15;
	  section.data(11).dtTransOffset = 10;
	
	  ;% process_B.DataTypeConversion7
	  section.data(12).logicalSrcIdx = 16;
	  section.data(12).dtTransOffset = 11;
	
	  ;% process_B.DataTypeConversion8
	  section.data(13).logicalSrcIdx = 17;
	  section.data(13).dtTransOffset = 12;
	
	  ;% process_B.DataTypeConversion9
	  section.data(14).logicalSrcIdx = 18;
	  section.data(14).dtTransOffset = 13;
	
	  ;% process_B.data
	  section.data(15).logicalSrcIdx = 19;
	  section.data(15).dtTransOffset = 14;
	
	  ;% process_B.data_n
	  section.data(16).logicalSrcIdx = 20;
	  section.data(16).dtTransOffset = 15;
	
	  ;% process_B.data_nm
	  section.data(17).logicalSrcIdx = 21;
	  section.data(17).dtTransOffset = 19;
	
	  ;% process_B.Accumulator_f
	  section.data(18).logicalSrcIdx = 22;
	  section.data(18).dtTransOffset = 23;
	
	  ;% process_B.y
	  section.data(19).logicalSrcIdx = 24;
	  section.data(19).dtTransOffset = 24;
	
	  ;% process_B.sum_eight_bit
	  section.data(20).logicalSrcIdx = 25;
	  section.data(20).dtTransOffset = 168;
	
	  ;% process_B.data_vector
	  section.data(21).logicalSrcIdx = 27;
	  section.data(21).dtTransOffset = 169;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% process_B.available
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_B.error
	  section.data(2).logicalSrcIdx = 32;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_B.new_data
	  section.data(3).logicalSrcIdx = 35;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_B.TriggeredSubsystem_n.rx
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_B.TriggeredSubsystem_d.rx
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
    sectIdxOffset = 7;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (process_DW)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% process_DW.UnitDelay2_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_DW.Accumulator_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 20;
      section.data(20)  = dumData; %prealloc
      
	  ;% process_DW.PacketOutput_PWORK
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_DW.PacketOutput1_PWORK
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 2;
	
	  ;% process_DW.Scope_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 4;
	
	  ;% process_DW.Scope1_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 6;
	
	  ;% process_DW.Scope1_PWORK_k.LoggedData
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 7;
	
	  ;% process_DW.Scope10_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 8;
	
	  ;% process_DW.Scope11_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 9;
	
	  ;% process_DW.Scope12_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 10;
	
	  ;% process_DW.Scope2_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 10;
	  section.data(9).dtTransOffset = 11;
	
	  ;% process_DW.Scope3_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 11;
	  section.data(10).dtTransOffset = 12;
	
	  ;% process_DW.Scope4_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 12;
	  section.data(11).dtTransOffset = 13;
	
	  ;% process_DW.Scope9_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 13;
	  section.data(12).dtTransOffset = 14;
	
	  ;% process_DW.PacketInput2_PWORK
	  section.data(13).logicalSrcIdx = 14;
	  section.data(13).dtTransOffset = 15;
	
	  ;% process_DW.Scope_PWORK_g.LoggedData
	  section.data(14).logicalSrcIdx = 15;
	  section.data(14).dtTransOffset = 16;
	
	  ;% process_DW.Scope_PWORK_m.LoggedData
	  section.data(15).logicalSrcIdx = 16;
	  section.data(15).dtTransOffset = 17;
	
	  ;% process_DW.Scope1_PWORK_g.LoggedData
	  section.data(16).logicalSrcIdx = 17;
	  section.data(16).dtTransOffset = 18;
	
	  ;% process_DW.Scope2_PWORK_f.LoggedData
	  section.data(17).logicalSrcIdx = 18;
	  section.data(17).dtTransOffset = 19;
	
	  ;% process_DW.Scope3_PWORK_n.LoggedData
	  section.data(18).logicalSrcIdx = 19;
	  section.data(18).dtTransOffset = 20;
	
	  ;% process_DW.Scope1_PWORK_m.LoggedData
	  section.data(19).logicalSrcIdx = 20;
	  section.data(19).dtTransOffset = 21;
	
	  ;% process_DW.Scope_PWORK_mw.LoggedData
	  section.data(20).logicalSrcIdx = 21;
	  section.data(20).dtTransOffset = 22;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_DW.Accumulator_DSTATE_h
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% process_DW.UnitDelay_DSTATE
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_DW.UnitDelay1_DSTATE
	  section.data(2).logicalSrcIdx = 24;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_DW.UnitDelay2_DSTATE_b
	  section.data(3).logicalSrcIdx = 25;
	  section.data(3).dtTransOffset = 5;
	
	  ;% process_DW.UnitDelay3_DSTATE
	  section.data(4).logicalSrcIdx = 26;
	  section.data(4).dtTransOffset = 6;
	
	  ;% process_DW.UnitDelay4_DSTATE
	  section.data(5).logicalSrcIdx = 27;
	  section.data(5).dtTransOffset = 7;
	
	  ;% process_DW.UnitDelay6_DSTATE
	  section.data(6).logicalSrcIdx = 28;
	  section.data(6).dtTransOffset = 8;
	
	  ;% process_DW.Accumulator_DSTATE_n
	  section.data(7).logicalSrcIdx = 29;
	  section.data(7).dtTransOffset = 9;
	
	  ;% process_DW.ResettableDelay_DSTATE
	  section.data(8).logicalSrcIdx = 30;
	  section.data(8).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_DW.UnitDelay5_DSTATE
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% process_DW.Accumulator_PrevResetState
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
	  ;% process_DW.message_rx_looper_SubsysRanBC
	  section.data(2).logicalSrcIdx = 33;
	  section.data(2).dtTransOffset = 1;
	
	  ;% process_DW.Accumulator_PrevResetState_n
	  section.data(3).logicalSrcIdx = 34;
	  section.data(3).dtTransOffset = 2;
	
	  ;% process_DW.crc_SubsysRanBC
	  section.data(4).logicalSrcIdx = 35;
	  section.data(4).dtTransOffset = 3;
	
	  ;% process_DW.TriggeredSubsystem_SubsysRanBC
	  section.data(5).logicalSrcIdx = 36;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_DW.TriggeredSubsystem_n.TriggeredSubsystem_SubsysRanBC
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% process_DW.TriggeredSubsystem_d.TriggeredSubsystem_SubsysRanBC
	  section.data(1).logicalSrcIdx = 38;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1547289812;
  targMap.checksum1 = 4132168702;
  targMap.checksum2 = 1735594953;
  targMap.checksum3 = 979310510;

