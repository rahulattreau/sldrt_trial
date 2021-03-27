  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
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
    ;% Auto data (check_serial_2msg_processor_2_P)
    ;%
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_P.PacketInput2_MaxMissedTicks
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% check_serial_2msg_processor_2_P.PacketOutput_MaxMissedTicks
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% check_serial_2msg_processor_2_P.PacketOutput1_MaxMissedTicks
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
	  ;% check_serial_2msg_processor_2_P.PacketInput2_YieldWhenWaiting
	  section.data(4).logicalSrcIdx = 7;
	  section.data(4).dtTransOffset = 3;
	
	  ;% check_serial_2msg_processor_2_P.PacketOutput_YieldWhenWaiting
	  section.data(5).logicalSrcIdx = 8;
	  section.data(5).dtTransOffset = 4;
	
	  ;% check_serial_2msg_processor_2_P.PacketOutput1_YieldWhenWaiting
	  section.data(6).logicalSrcIdx = 9;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_P.PacketInput2_PacketID
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% check_serial_2msg_processor_2_P.PacketOutput_PacketID
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% check_serial_2msg_processor_2_P.PacketOutput1_PacketID
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_P.Constant_Value
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
	  ;% check_serial_2msg_processor_2_P.Constant_Value_i
	  section.data(2).logicalSrcIdx = 14;
	  section.data(2).dtTransOffset = 1;
	
	  ;% check_serial_2msg_processor_2_P.Constant1_Value
	  section.data(3).logicalSrcIdx = 15;
	  section.data(3).dtTransOffset = 2;
	
	  ;% check_serial_2msg_processor_2_P.Constant2_Value
	  section.data(4).logicalSrcIdx = 16;
	  section.data(4).dtTransOffset = 3;
	
	  ;% check_serial_2msg_processor_2_P.Constant3_Value
	  section.data(5).logicalSrcIdx = 17;
	  section.data(5).dtTransOffset = 4;
	
	  ;% check_serial_2msg_processor_2_P.Constant4_Value
	  section.data(6).logicalSrcIdx = 18;
	  section.data(6).dtTransOffset = 5;
	
	  ;% check_serial_2msg_processor_2_P.Constant5_Value
	  section.data(7).logicalSrcIdx = 19;
	  section.data(7).dtTransOffset = 6;
	
	  ;% check_serial_2msg_processor_2_P.Constant10_Value
	  section.data(8).logicalSrcIdx = 20;
	  section.data(8).dtTransOffset = 7;
	
	  ;% check_serial_2msg_processor_2_P.Constant11_Value
	  section.data(9).logicalSrcIdx = 21;
	  section.data(9).dtTransOffset = 8;
	
	  ;% check_serial_2msg_processor_2_P.Constant12_Value
	  section.data(10).logicalSrcIdx = 22;
	  section.data(10).dtTransOffset = 9;
	
	  ;% check_serial_2msg_processor_2_P.Constant13_Value
	  section.data(11).logicalSrcIdx = 23;
	  section.data(11).dtTransOffset = 10;
	
	  ;% check_serial_2msg_processor_2_P.Constant6_Value
	  section.data(12).logicalSrcIdx = 24;
	  section.data(12).dtTransOffset = 11;
	
	  ;% check_serial_2msg_processor_2_P.Constant7_Value
	  section.data(13).logicalSrcIdx = 25;
	  section.data(13).dtTransOffset = 12;
	
	  ;% check_serial_2msg_processor_2_P.Constant8_Value
	  section.data(14).logicalSrcIdx = 26;
	  section.data(14).dtTransOffset = 13;
	
	  ;% check_serial_2msg_processor_2_P.Constant9_Value
	  section.data(15).logicalSrcIdx = 27;
	  section.data(15).dtTransOffset = 14;
	
	  ;% check_serial_2msg_processor_2_P.ExecutionTime_P1
	  section.data(16).logicalSrcIdx = 28;
	  section.data(16).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_P.UnitDelay5_InitialCondition
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
	  ;% check_serial_2msg_processor_2_P.Constant16_Value
	  section.data(2).logicalSrcIdx = 30;
	  section.data(2).dtTransOffset = 1;
	
	  ;% check_serial_2msg_processor_2_P.Constant18_Value
	  section.data(3).logicalSrcIdx = 31;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_P.Out1_Y0
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
	  ;% check_serial_2msg_processor_2_P.iterator_Y0
	  section.data(2).logicalSrcIdx = 33;
	  section.data(2).dtTransOffset = 1;
	
	  ;% check_serial_2msg_processor_2_P.y_Y0
	  section.data(3).logicalSrcIdx = 34;
	  section.data(3).dtTransOffset = 2;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay_InitialCondition
	  section.data(4).logicalSrcIdx = 35;
	  section.data(4).dtTransOffset = 3;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition
	  section.data(5).logicalSrcIdx = 36;
	  section.data(5).dtTransOffset = 4;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay2_InitialCondition
	  section.data(6).logicalSrcIdx = 37;
	  section.data(6).dtTransOffset = 5;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay3_InitialCondition
	  section.data(7).logicalSrcIdx = 38;
	  section.data(7).dtTransOffset = 6;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay4_InitialCondition
	  section.data(8).logicalSrcIdx = 39;
	  section.data(8).dtTransOffset = 7;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay_InitialCondition_k
	  section.data(9).logicalSrcIdx = 40;
	  section.data(9).dtTransOffset = 8;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition_j
	  section.data(10).logicalSrcIdx = 41;
	  section.data(10).dtTransOffset = 9;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay2_InitialCondition_j
	  section.data(11).logicalSrcIdx = 42;
	  section.data(11).dtTransOffset = 10;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay3_InitialCondition_b
	  section.data(12).logicalSrcIdx = 43;
	  section.data(12).dtTransOffset = 11;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay4_InitialCondition_n
	  section.data(13).logicalSrcIdx = 44;
	  section.data(13).dtTransOffset = 12;
	
	  ;% check_serial_2msg_processor_2_P.UnitDelay_InitialCondition_h
	  section.data(14).logicalSrcIdx = 45;
	  section.data(14).dtTransOffset = 13;
	
	  ;% check_serial_2msg_processor_2_P.Accumulator_IC
	  section.data(15).logicalSrcIdx = 46;
	  section.data(15).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
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
    nTotSects     = 4;
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
    ;% Auto data (check_serial_2msg_processor_2_B)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_B.ExecutionTime
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_B.missed_ticks
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 24;
      section.data(24)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion1
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion2
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion3
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion4
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 4;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion5
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 5;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion10
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 6;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion11
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 7;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion12
	  section.data(9).logicalSrcIdx = 10;
	  section.data(9).dtTransOffset = 8;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion13
	  section.data(10).logicalSrcIdx = 11;
	  section.data(10).dtTransOffset = 9;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion6
	  section.data(11).logicalSrcIdx = 12;
	  section.data(11).dtTransOffset = 10;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion7
	  section.data(12).logicalSrcIdx = 13;
	  section.data(12).dtTransOffset = 11;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion8
	  section.data(13).logicalSrcIdx = 14;
	  section.data(13).dtTransOffset = 12;
	
	  ;% check_serial_2msg_processor_2_B.DataTypeConversion9
	  section.data(14).logicalSrcIdx = 15;
	  section.data(14).dtTransOffset = 13;
	
	  ;% check_serial_2msg_processor_2_B.WhileIterator
	  section.data(15).logicalSrcIdx = 16;
	  section.data(15).dtTransOffset = 14;
	
	  ;% check_serial_2msg_processor_2_B.data
	  section.data(16).logicalSrcIdx = 17;
	  section.data(16).dtTransOffset = 15;
	
	  ;% check_serial_2msg_processor_2_B.y
	  section.data(17).logicalSrcIdx = 19;
	  section.data(17).dtTransOffset = 16;
	
	  ;% check_serial_2msg_processor_2_B.data_vector
	  section.data(18).logicalSrcIdx = 20;
	  section.data(18).dtTransOffset = 160;
	
	  ;% check_serial_2msg_processor_2_B.state
	  section.data(19).logicalSrcIdx = 21;
	  section.data(19).dtTransOffset = 164;
	
	  ;% check_serial_2msg_processor_2_B.data_vector_n
	  section.data(20).logicalSrcIdx = 22;
	  section.data(20).dtTransOffset = 165;
	
	  ;% check_serial_2msg_processor_2_B.packet_size
	  section.data(21).logicalSrcIdx = 24;
	  section.data(21).dtTransOffset = 169;
	
	  ;% check_serial_2msg_processor_2_B.msg_id
	  section.data(22).logicalSrcIdx = 25;
	  section.data(22).dtTransOffset = 170;
	
	  ;% check_serial_2msg_processor_2_B.state_d
	  section.data(23).logicalSrcIdx = 26;
	  section.data(23).dtTransOffset = 171;
	
	  ;% check_serial_2msg_processor_2_B.data_vector_m
	  section.data(24).logicalSrcIdx = 27;
	  section.data(24).dtTransOffset = 172;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_B.available
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
	  ;% check_serial_2msg_processor_2_B.error
	  section.data(2).logicalSrcIdx = 32;
	  section.data(2).dtTransOffset = 1;
	
	  ;% check_serial_2msg_processor_2_B.new_data
	  section.data(3).logicalSrcIdx = 33;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
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
    nTotSects     = 3;
    sectIdxOffset = 4;
    
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
    ;% Auto data (check_serial_2msg_processor_2_DW)
    ;%
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_DW.PacketOutput_PWORK
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% check_serial_2msg_processor_2_DW.PacketOutput1_PWORK
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% check_serial_2msg_processor_2_DW.Scope25_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% check_serial_2msg_processor_2_DW.Scope26_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% check_serial_2msg_processor_2_DW.PacketInput2_PWORK
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% check_serial_2msg_processor_2_DW.Scope_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% check_serial_2msg_processor_2_DW.Scope1_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% check_serial_2msg_processor_2_DW.Scope2_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% check_serial_2msg_processor_2_DW.Scope_PWORK_n.LoggedData
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% check_serial_2msg_processor_2_DW.Scope1_PWORK_a.LoggedData
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% check_serial_2msg_processor_2_DW.Scope3_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% check_serial_2msg_processor_2_DW.Scope4_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% check_serial_2msg_processor_2_DW.Scope6_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% check_serial_2msg_processor_2_DW.Scope_PWORK_m.LoggedData
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% check_serial_2msg_processor_2_DW.Scope1_PWORK_g.LoggedData
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% check_serial_2msg_processor_2_DW.Scope2_PWORK_f.LoggedData
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% check_serial_2msg_processor_2_DW.Scope3_PWORK_n.LoggedData
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_DW.Accumulator_DSTATE
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
	  ;% check_serial_2msg_processor_2_DW.TriggeredSubsystem_SubsysRanBC
	  section.data(2).logicalSrcIdx = 31;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
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


  targMap.checksum0 = 1957581205;
  targMap.checksum1 = 2880920992;
  targMap.checksum2 = 2871374533;
  targMap.checksum3 = 3742932676;

