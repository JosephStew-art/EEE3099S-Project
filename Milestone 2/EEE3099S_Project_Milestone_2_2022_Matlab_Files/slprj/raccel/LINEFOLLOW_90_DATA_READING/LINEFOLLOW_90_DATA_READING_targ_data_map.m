    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 9;
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
        ;% Auto data (rtP)
        ;%
            section.nData     = 50;
            section.data(50)  = dumData; %prealloc

                    ;% rtP.InputPWM
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.WheelSpeed
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 173;

                    ;% rtP.axleLength
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 346;

                    ;% rtP.lineLength
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 347;

                    ;% rtP.ticksPerRot
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 348;

                    ;% rtP.wheelR
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 349;

                    ;% rtP.LineSensor1_envVal
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 350;

                    ;% rtP.LineSensor1_lineVal
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 351;

                    ;% rtP.LeftMotor_sensorType
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 352;

                    ;% rtP.RightMotor_sensorType
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 353;

                    ;% rtP.RobotSimulator_startTheta
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 354;

                    ;% rtP.RobotSimulator_startX
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 355;

                    ;% rtP.RobotSimulator_startY
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 356;

                    ;% rtP.Towlwr_wheelR
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 357;

                    ;% rtP.Gain_Gain
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 358;

                    ;% rtP.Gain_Gain_cirheseb5s
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 359;

                    ;% rtP.DiscreteTimeIntegrator2_gainval
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 360;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 361;

                    ;% rtP.DiscreteTimeIntegrator1_gainval
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 362;

                    ;% rtP.DiscreteTimeIntegrator_gainval_bfxl21iqwk
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 363;

                    ;% rtP.DiscreteTimeIntegrator_IC
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 364;

                    ;% rtP.DiscreteTimeIntegrator1_gainval_hret3wtaoa
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 365;

                    ;% rtP.DiscreteTimeIntegrator1_IC
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 366;

                    ;% rtP.Gain_Gain_dvchqdxwbj
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 367;

                    ;% rtP.Gain_Gain_oneshwnrhn
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 368;

                    ;% rtP.DiscreteTimeIntegrator_gainval_pqjn4s3zfp
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 369;

                    ;% rtP.DiscreteTimeIntegrator_IC_nxjdqjay5a
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 370;

                    ;% rtP.Internal_A
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 371;

                    ;% rtP.Internal_B
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 380;

                    ;% rtP.Internal_C
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 383;

                    ;% rtP.Switch_Threshold
                    section.data(31).logicalSrcIdx = 32;
                    section.data(31).dtTransOffset = 386;

                    ;% rtP.DiscreteTimeIntegrator_gainval_nsbpff3iej
                    section.data(32).logicalSrcIdx = 33;
                    section.data(32).dtTransOffset = 387;

                    ;% rtP.DiscreteTimeIntegrator_IC_e2rs5vbr1z
                    section.data(33).logicalSrcIdx = 34;
                    section.data(33).dtTransOffset = 388;

                    ;% rtP.Internal_A_bedsmejnmc
                    section.data(34).logicalSrcIdx = 35;
                    section.data(34).dtTransOffset = 389;

                    ;% rtP.Internal_B_f5c2cweayi
                    section.data(35).logicalSrcIdx = 36;
                    section.data(35).dtTransOffset = 398;

                    ;% rtP.Internal_C_j3hwsrye03
                    section.data(36).logicalSrcIdx = 37;
                    section.data(36).dtTransOffset = 401;

                    ;% rtP.Switch_Threshold_optfqfjagg
                    section.data(37).logicalSrcIdx = 40;
                    section.data(37).dtTransOffset = 404;

                    ;% rtP.SoftRealTime_P1_Size
                    section.data(38).logicalSrcIdx = 41;
                    section.data(38).dtTransOffset = 405;

                    ;% rtP.SoftRealTime_P1
                    section.data(39).logicalSrcIdx = 42;
                    section.data(39).dtTransOffset = 407;

                    ;% rtP.Gain2_Gain
                    section.data(40).logicalSrcIdx = 43;
                    section.data(40).dtTransOffset = 408;

                    ;% rtP.Gain3_Gain
                    section.data(41).logicalSrcIdx = 44;
                    section.data(41).dtTransOffset = 409;

                    ;% rtP.changeparameters_Gain
                    section.data(42).logicalSrcIdx = 45;
                    section.data(42).dtTransOffset = 410;

                    ;% rtP.DataStoreMemory_InitialValue
                    section.data(43).logicalSrcIdx = 46;
                    section.data(43).dtTransOffset = 414;

                    ;% rtP.DataStoreMemory1_InitialValue
                    section.data(44).logicalSrcIdx = 47;
                    section.data(44).dtTransOffset = 415;

                    ;% rtP.Circle_Value
                    section.data(45).logicalSrcIdx = 48;
                    section.data(45).dtTransOffset = 416;

                    ;% rtP.Gain1_Gain
                    section.data(46).logicalSrcIdx = 49;
                    section.data(46).dtTransOffset = 417;

                    ;% rtP.Constant_Value
                    section.data(47).logicalSrcIdx = 50;
                    section.data(47).dtTransOffset = 418;

                    ;% rtP.Constant1_Value
                    section.data(48).logicalSrcIdx = 51;
                    section.data(48).dtTransOffset = 422;

                    ;% rtP.Constant_Value_lsb3s3lan1
                    section.data(49).logicalSrcIdx = 52;
                    section.data(49).dtTransOffset = 426;

                    ;% rtP.Constant1_Value_h1zlwjstwh
                    section.data(50).logicalSrcIdx = 53;
                    section.data(50).dtTransOffset = 427;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.Switch_Threshold_dssh4epfux
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.osbt1yzhh0.Constant_Value
                    section.data(1).logicalSrcIdx = 55;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Gain1_Gain
                    section.data(1).logicalSrcIdx = 56;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Bias_Bias
                    section.data(2).logicalSrcIdx = 57;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Saturation_UpperSat
                    section.data(3).logicalSrcIdx = 58;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Saturation_LowerSat
                    section.data(4).logicalSrcIdx = 59;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Gain_Gain
                    section.data(5).logicalSrcIdx = 60;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Bias1_Bias
                    section.data(6).logicalSrcIdx = 61;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Saturation1_UpperSat
                    section.data(7).logicalSrcIdx = 62;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Saturation1_LowerSat
                    section.data(8).logicalSrcIdx = 63;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Constant_Value
                    section.data(9).logicalSrcIdx = 64;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.Constant1_Value
                    section.data(10).logicalSrcIdx = 65;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.DirectLookupTablenD_table
                    section.data(1).logicalSrcIdx = 66;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.osbt1yzhh0.osbt1yzhh0.DirectLookupTablenD_DiagnosticForOutOfRangeInput
                    section.data(1).logicalSrcIdx = 67;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtP.ofwjthgdta.Gain1_Gain
                    section.data(1).logicalSrcIdx = 68;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.ofwjthgdta.Bias_Bias
                    section.data(2).logicalSrcIdx = 69;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.ofwjthgdta.Gain_Gain
                    section.data(3).logicalSrcIdx = 70;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.ofwjthgdta.Bias1_Bias
                    section.data(4).logicalSrcIdx = 71;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.ofwjthgdta.Saturation2_UpperSat
                    section.data(5).logicalSrcIdx = 72;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.ofwjthgdta.Saturation2_LowerSat
                    section.data(6).logicalSrcIdx = 73;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.ofwjthgdta.Saturation3_UpperSat
                    section.data(7).logicalSrcIdx = 74;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.ofwjthgdta.Saturation3_LowerSat
                    section.data(8).logicalSrcIdx = 75;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.ofwjthgdta.Constant_Value
                    section.data(9).logicalSrcIdx = 76;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ofwjthgdta.DirectLookupTablenD_table
                    section.data(1).logicalSrcIdx = 77;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ofwjthgdta.DirectLookupTablenD_DiagnosticForOutOfRangeInput
                    section.data(1).logicalSrcIdx = 78;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
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
        ;% Auto data (rtB)
        ;%
            section.nData     = 26;
            section.data(26)  = dumData; %prealloc

                    ;% rtB.ouowhxxprb
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.jxi1x4e03t
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.pc3evx0mow
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.m4eljzmdsj
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.cuoexuzlm4
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

                    ;% rtB.becycjtoxf
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% rtB.axzxj5uktk
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtB.idida0022t
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% rtB.jq2505hglk
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% rtB.njczvchnoe
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% rtB.c0iltmlfbi
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% rtB.mbceuuvi1k
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% rtB.e2vtmpvjdz
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% rtB.n45i4rsrnl
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 16;

                    ;% rtB.itj32cisqf
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 17;

                    ;% rtB.mmkuncny5o
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 18;

                    ;% rtB.dowb3m4bgk
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 19;

                    ;% rtB.jl4ub35pwm
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 20;

                    ;% rtB.k5srpchxkd
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 21;

                    ;% rtB.mzdhsevphf
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 22;

                    ;% rtB.ljdqe2rmnt
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 23;

                    ;% rtB.jzxctmmzb1
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 24;

                    ;% rtB.bpcnsls3wa
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 25;

                    ;% rtB.in0g5ymfbo
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 34;

                    ;% rtB.jb4chrbkfd
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 35;

                    ;% rtB.dgw1rht5ve
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 36;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.csiuroqpjm
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.osbt1yzhh0[0].houlu1kk0d
                    section.data(1).logicalSrcIdx = 27;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.osbt1yzhh0[0].kkjjs3cohz
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

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
        nTotSects     = 16;
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
        ;% Auto data (rtDW)
        ;%
            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtDW.lddr43iukk
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.eswpe1v5pw
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.gymzq2v1d1
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.irdg0umelv
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.mnyij4et0u
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.orx3nc2dkn
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dky3a1sqsf
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.eeh3unqcyj
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 9;

                    ;% rtDW.jjyoxccwxa
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 10;

                    ;% rtDW.o1xils2q02
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 13;

                    ;% rtDW.c2uqsnlhjq
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 14;

                    ;% rtDW.iq0uewqkwz
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 15;

                    ;% rtDW.hfhaxbdpqy
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 16;

                    ;% rtDW.nhycdpz4ks
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 17;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.i4jo210mxu.LoggedData
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.fuzb3gejwn.LoggedData
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.kxzqy0x130.LoggedData
                    section.data(3).logicalSrcIdx = 16;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.a20layddt4.LoggedData
                    section.data(4).logicalSrcIdx = 17;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.om04ta0vib
                    section.data(1).logicalSrcIdx = 18;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.o4m4odno13
                    section.data(2).logicalSrcIdx = 19;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.khqtjuisp2
                    section.data(3).logicalSrcIdx = 20;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ehlxkuk1in
                    section.data(4).logicalSrcIdx = 21;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.bff3bj3sb0
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dxnpm1ncbe
                    section.data(2).logicalSrcIdx = 23;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.mh4aj0wqkn
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bdljyikdhx
                    section.data(2).logicalSrcIdx = 25;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.aerlsydhoo
                    section.data(3).logicalSrcIdx = 26;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.nmzj15qgzq
                    section.data(1).logicalSrcIdx = 27;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jds0ut2wuv
                    section.data(2).logicalSrcIdx = 28;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.osbt1yzhh0[0].l1mfqwj5rc
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.osbt1yzhh0[0].ciff0uw4a3
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.osbt1yzhh0[0].di3vr0e2iw
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.osbt1yzhh0[0].osbt1yzhh0[1326].hoasecisyd
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ofwjthgdta[3].ovm2oyeful
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ofwjthgdta[3].ohq2ztllxo
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ofwjthgdta[3].duw1xkqtek
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ofwjthgdta[3].ncb2yiikbt
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jyumvcfqdh.akjaaoglbg
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ftq2sugm1pk.akjaaoglbg
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
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


    targMap.checksum0 = 3341672022;
    targMap.checksum1 = 236687412;
    targMap.checksum2 = 3185214979;
    targMap.checksum3 = 4213670557;

