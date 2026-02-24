HEADER OPTIONS
C    SINDA Data generated with Thermal Desktop 25.2 SP2
C    Installed Sinda: Sinda 25.2 SP2
C    Generated on Mon Feb 23 19:33:50 2026
C    From file: 3U.dwg
C    Case Set: Basic
C    TDUNITS,   Energy     = J
C    TDUNITS,   Time       = s
C    TDUNITS,   Temp       = K
C    TDUNITS,   Mass       = kg
C    TDUNITS,   Length     = m
C    TDUNITS,   Orbit      = km
C    TDUNITS,   Pressure   = Pa
C    TDUNITS,   Force      = N
C    TDUNITS,   Angle      = Degrees
C    TDUNITS,   Volt       = volt
C    TDUNITS,   Current    = amp
C    DWG name:      3U.dwg
C    Thermophysical Property Database: ..\..\Documents\TdThermo.tdp
C    Optical Property Database:        ..\..\Documents\RcOptics.rco
C    Computer name: HSLLAB
C    Symbol Names, Evaluated values, Input Strings, Comments
C    beta_angle           0.            0
C    hrBetaAngle          0.            0
C    hrEccen              0.            0
C    hrIllum              0.            0
C    hrMeanAnom           324.          324
C    hrPeriod             5676.98       5676.98              Always in current user units. If programming, use hrPeri...
C    hrPeriodSec          5676.98       5676.98
C    hrPlanetX            -0.987688     -0.987688
C    hrPlanetY            0.            0
C    hrPlanetZ            -0.1564345    -1.564344650400e-01 
C    hrPos                20.           20
C    hrShadowEntry        111.9846      1.119845819092e+02  
C    hrShadowExit         248.0154      2.480154180909e+02  
C    hrSpeed              7.61261       7.61261
C    hrSubSolarMeanAnom   6.113030e-12  6.11303e-12          -180 to 180
C    hrSubSolarTrueAnom   6.113030e-12  6.11303e-12          -180 to 180
C    hrSunX               0.707107      0.707107
C    hrSunY               0.            0
C    hrSunZ               0.707107      0.707107
C    hrTime               5109.28       5109.28              Always in current user units. If programming, use hrTime...
C    hrTimeSec            5109.28       5109.28
C    hrTimeShadowEntry    1765.928      1.765927779927e+03  
C    hrTimeShadowEntrySec 1765.928      1.765927779927e+03  
C    hrTimeShadowExit     3911.05       3911.05
C    hrTimeShadowExitSec  3911.05       3911.05
C    hrTrueAnom           324.          324
C    hrVelocityX          -0.1564345    -1.564344650400e-01 
C    hrVelocityY          0.            0
C    hrVelocityZ          0.987688      0.987688
C
HEADER REGISTER DATA
      INT:TD_THERMAL_TIME_STEP = 0 $ Fortran Array - 1 Arrays
HEADER OUTPUT CALLS, GLOBAL
C Case Set Prop Generated Code

      CALL TPRINT('ALL')
      IF(NSOL .GT. 1 ) THEN
          IF(TIMEN .GE. TIMEND) THEN
              CALL SAVE('ALL',0)
          ELSE
              CALL SAVE('TR',0)
          ENDIF
      ELSE IF( LOOPCT .GT. 0 ) THEN
          CALL SAVE('ALL',0)
      ENDIF

HEADER OUTPUT CALLS, GLOBAL_INIT
F      CALL THERMALTSM(UDCA(TD_THERMAL_TIME_STEP)%CA)


HEADER NODE DATA, MAIN
            1,    293.15,    2.981868
            2,    293.15,    2.981868
            3,    293.15,    2.981868
            4,    293.15,    2.981868
            5,    293.15,    8.945604
            6,    293.15,    8.945604
            7,    293.15,    8.945604
            8,    293.15,    8.945604
            9,    293.15,    4.690625
            10,    293.15,    9.381251
            11,    293.15,    18.7625
            12,    293.15,    9.381251
            13,    293.15,    18.7625
            14,    293.15,    37.525
            15,    293.15,    18.7625
            16,    293.15,    9.381251
            17,    293.15,    18.7625
            18,    293.15,    9.381251
            19,    293.15,    4.690625
            20,    293.15,    9.381251
            21,    293.15,    4.690625
            22,    293.15,    9.381251
            23,    293.15,    18.7625
            24,    293.15,    9.381251
            25,    293.15,    4.690625
            26,    293.15,    9.381251
            27,    293.15,    4.690625
            28,    293.15,    9.8064
            29,    293.15,    9.8064
            30,    293.15,    9.8064
            31,    293.15,    9.8064
            32,    293.15,    4.9032
            49,    293.15,    4.9032
            50,    293.15,    7.56
            51,    293.15,    7.56
            52,    293.15,    4.9032
            53,    293.15,    4.9032
            54,    293.15,    19.6128
            55,    293.15,    7.56
            56,    293.15,    7.56
            57,    293.15,    19.6128
            58,    293.15,    19.6128
            59,    293.15,    19.6128
            60,    293.15,    7.56
            61,    293.15,    7.56
            62,    293.15,    19.6128
            63,    293.15,    19.6128
            64,    293.15,    9.8064
            65,    293.15,    7.56
            66,    293.15,    7.56
            67,    293.15,    7.56
            68,    293.15,    7.56
            69,    293.15,    7.56
            71,    293.15,    7.56
            72,    293.15,    9.8064
            73,    293.15,    19.6128
            74,    293.15,    19.6128
            76,    293.15,    7.56
            77,    293.15,    19.6128
            78,    293.15,    19.6128
            79,    293.15,    19.6128
            81,    293.15,    7.56
            82,    293.15,    19.6128
            83,    293.15,    19.6128
            84,    293.15,    9.8064
            86,    293.15,    7.56
            87,    293.15,    9.8064
            88,    293.15,    9.8064
            89,    293.15,    9.8064
            92,    293.15,    9.8064
            93,    293.15,    9.8064
            94,    293.15,    19.6128
            97,    293.15,    19.6128
            98,    293.15,    19.6128
            99,    293.15,    19.6128
            102,    293.15,    19.6128
            103,    293.15,    19.6128
            104,    293.15,    9.8064
            105,    293.15,    7.56
            106,    293.15,    7.56
            107,    293.15,    9.8064
            108,    293.15,    9.8064
            109,    293.15,    9.8064
            112,    293.15,    9.8064
            113,    293.15,    19.6128
            114,    293.15,    9.8064
            117,    293.15,    9.8064
            118,    293.15,    19.6128
            119,    293.15,    19.6128
            122,    293.15,    19.6128
            123,    293.15,    19.6128
            124,    293.15,    19.6128
            127,    293.15,    19.6128
            128,    293.15,    19.6128
            129,    293.15,    9.8064
            132,    293.15,    9.8064
            133,    293.15,    9.8064
            134,    293.15,    9.8064
            137,    293.15,    9.8064
            138,    293.15,    4.9032
            139,    293.15,    19.6128
            142,    293.15,    19.6128
            143,    293.15,    9.8064
            144,    293.15,    19.6128
            147,    293.15,    19.6128
            148,    293.15,    9.8064
            149,    293.15,    9.8064
            152,    293.15,    9.8064
            153,    293.15,    9.8064
            154,    293.15,    4.9032
            157,    293.15,    4.9032
            158,    293.15,    9.8064
            159,    293.15,    9.8064
            160,    293.15,    7.56
            161,    293.15,    7.56
            162,    293.15,    9.8064
            163,    293.15,    9.8064
            164,    293.15,    9.8064
            167,    293.15,    9.8064
            168,    293.15,    9.8064
            169,    293.15,    9.8064
            172,    293.15,    9.8064
            173,    293.15,    9.8064
            174,    293.15,    4.9032
            177,    293.15,    4.9032
            178,    293.15,    4.9032
            214,    293.15,    4.9032
            215,    293.15,    7.56
            216,    293.15,    7.56
            217,    293.15,    4.9032
            218,    293.15,    9.8064
            264,    293.15,    9.8064
            265,    293.15,    7.56
            266,    293.15,    7.56
            267,    293.15,    9.8064
            268,    293.15,    9.8064
            269,    293.15,    19.6128
            270,    293.15,    7.56
            271,    293.15,    7.56
            272,    293.15,    19.6128
            273,    293.15,    9.8064
            274,    293.15,    19.6128
            275,    293.15,    7.56
            276,    293.15,    7.56
            277,    293.15,    19.6128
            278,    293.15,    9.8064
            279,    293.15,    9.8064
            280,    293.15,    7.56
            281,    293.15,    7.56
            282,    293.15,    9.8064
            283,    293.15,    4.9032
            284,    293.15,    9.8064
            285,    293.15,    7.56
            286,    293.15,    7.56
            287,    293.15,    9.8064
            288,    293.15,    9.8064
            289,    293.15,    4.9032
            291,    293.15,    19.6128
            292,    293.15,    19.6128
            293,    293.15,    19.6128
            294,    293.15,    19.6128
            295,    293.15,    19.6128
            296,    293.15,    19.6128
            297,    293.15,    9.8064
            298,    293.15,    9.8064
            299,    293.15,    19.6128
            300,    293.15,    19.6128
            301,    293.15,    9.8064
            302,    293.15,    19.6128
            303,    293.15,    19.6128
            304,    293.15,    19.6128
            305,    293.15,    19.6128
            306,    293.15,    9.8064
            307,    293.15,    4.9032
            308,    293.15,    9.8064
            309,    293.15,    9.8064
            310,    293.15,    9.8064
            311,    293.15,    9.8064
            312,    293.15,    9.8064
            313,    293.15,    4.9032
            314,    293.15,    9.8064
            315,    293.15,    12.75185
            319,    293.15,    12.75185
            320,    293.15,    12.75185
            321,    293.15,    12.75185
            322,    293.15,    12.75185
            323,    293.15,    12.75185
            324,    293.15,    12.75185
            325,    293.15,    12.75185
            326,    293.15,    7.56
            327,    293.15,    9.8064
            328,    293.15,    19.6128
            329,    293.15,    9.8064
            330,    293.15,    12.75185
            331,    293.15,    1.785907
            332,    293.15,    1.785907
            333,    293.15,    1.785907
            334,    293.15,    1.785907
            335,    293.15,    1.785907
            336,    293.15,    1.785907
            337,    293.15,    1.785907
            338,    293.15,    1.785907
            339,    293.15,    12.75185
            340,    293.15,    1.785907
            341,    293.15,    12.75185
            342,    293.15,    1.785907
            343,    293.15,    12.75185
            344,    293.15,    1.785907
            345,    293.15,    12.75185
            346,    293.15,    1.785907
            347,    293.15,    12.75185
            348,    293.15,    1.785907
            349,    293.15,    12.75185
            350,    293.15,    1.785907
            351,    293.15,    12.75185
            352,    293.15,    1.785907
            353,    293.15,    1.785907
            354,    293.15,    1.785907
            355,    293.15,    1.785907
            356,    293.15,    1.785907
            357,    293.15,    1.785907
            358,    293.15,    1.785907
            359,    293.15,    1.785907
            360,    293.15,    1.785907
            361,    293.15,    1.785907
            362,    293.15,    1.785907
            363,    293.15,    9.8064
            364,    293.15,    9.8064
            365,    293.15,    1.785907
            366,    293.15,    1.785907
            367,    293.15,    1.785907
            368,    293.15,    1.785907
            369,    293.15,    1.785907
            370,    293.15,    1.785907
            371,    293.15,    1.785907
            372,    293.15,    4.690625
            373,    293.15,    2.981868
            374,    293.15,    9.381251
            375,    293.15,    2.981868
            376,    293.15,    4.690625
            377,    293.15,    2.981868
            378,    293.15,    9.381251
            379,    293.15,    2.981868
            380,    293.15,    18.7625
            381,    293.15,    8.945604
            382,    293.15,    9.381251
            383,    293.15,    8.945604
            384,    293.15,    4.690625
            385,    293.15,    8.945604
            386,    293.15,    9.381251
            387,    293.15,    8.945604
HEADER CONDUCTOR DATA, MAIN
            1,    MAIN.1,    MAIN.2,    0.6591561
            2,    MAIN.1,    MAIN.4,    0.6591561
            3,    MAIN.1,    MAIN.5,    0.7402077
C Contact - Face Contactor-+Z Surface to +Z Patch Antenna [MAIN][0]::EC7
C Contact - Face Contactor-+Z Patch Antenna to +Z Face[MAIN][0]::ECA
            4,    MAIN.1,    MAIN.61,    0.0007976078
            5,    MAIN.2,    MAIN.3,    0.6591561
            6,    MAIN.2,    MAIN.6,    0.7402077
C Contact - Face Contactor-+Z Surface to +Z Patch Antenna [MAIN][0]::EC7
C Contact - Face Contactor-+Z Patch Antenna to +Z Face[MAIN][0]::ECA
            7,    MAIN.2,    MAIN.56,    0.0007976078
            8,    MAIN.3,    MAIN.4,    0.6591561
            9,    MAIN.3,    MAIN.7,    0.7402077
C Contact - Face Contactor-+Z Surface to +Z Patch Antenna [MAIN][0]::EC7
C Contact - Face Contactor-+Z Patch Antenna to +Z Face[MAIN][0]::ECA
            10,    MAIN.3,    MAIN.271,    0.0007976078
            11,    MAIN.4,    MAIN.8,    0.7402077
C Contact - Face Contactor-+Z Surface to +Z Patch Antenna [MAIN][0]::EC7
C Contact - Face Contactor-+Z Patch Antenna to +Z Face[MAIN][0]::ECA
            12,    MAIN.4,    MAIN.276,    0.0007976078
            13,    MAIN.5,    MAIN.6,    0.2197187
            14,    MAIN.5,    MAIN.8,    0.2197187
C Contact - Face Contactor-+Z Surface to +Z Patch Antenna [MAIN][0]::EC7
C Contact - Face Contactor-+Z Patch Antenna to +Z Face[MAIN][0]::ECA
            15,    MAIN.5,    MAIN.61,    0.0004476604
            16,    MAIN.5,    MAIN.66,    0.001065947
            17,    MAIN.5,    MAIN.81,    0.001065947
            18,    MAIN.5,    MAIN.86,    0.0007132689
            19,    MAIN.6,    MAIN.7,    0.2197187
C Contact - Face Contactor-+Z Surface to +Z Patch Antenna [MAIN][0]::EC7
C Contact - Face Contactor-+Z Patch Antenna to +Z Face[MAIN][0]::ECA
            20,    MAIN.6,    MAIN.56,    0.0004476604
            21,    MAIN.6,    MAIN.71,    0.0007132689
            22,    MAIN.6,    MAIN.76,    0.001065947
            23,    MAIN.6,    MAIN.286,    0.001065947
            24,    MAIN.7,    MAIN.8,    0.2197187
C Contact - Face Contactor-+Z Surface to +Z Patch Antenna [MAIN][0]::EC7
C Contact - Face Contactor-+Z Patch Antenna to +Z Face[MAIN][0]::ECA
            25,    MAIN.7,    MAIN.51,    0.0007132689
            26,    MAIN.7,    MAIN.106,    0.001065947
            27,    MAIN.7,    MAIN.266,    0.001065947
            28,    MAIN.7,    MAIN.271,    0.0004476604
            29,    MAIN.8,    MAIN.161,    0.001065947
            30,    MAIN.8,    MAIN.216,    0.0007132689
            31,    MAIN.8,    MAIN.276,    0.0004476604
            32,    MAIN.8,    MAIN.281,    0.001065947
            33,    MAIN.9,    MAIN.18,    0.02989673
C Contact - Face Contactor[MAIN][0]::EA4
            34,    MAIN.9,    MAIN.360,    0.0001258201
            35,    MAIN.9,    MAIN.361,    0.0004936921
            36,    MAIN.9,    MAIN.382,    0.01615229
            37,    MAIN.9,    MAIN.386,    0.02048928
            38,    MAIN.10,    MAIN.11,    0.04097857
            39,    MAIN.10,    MAIN.13,    0.03230458
            40,    MAIN.10,    MAIN.19,    0.02989673
C Contact - Face Contactor[MAIN][0]::EA4
            41,    MAIN.10,    MAIN.354,    4.002240e-05 
            42,    MAIN.10,    MAIN.362,    0.0003553504
            43,    MAIN.10,    MAIN.367,    0.0003602016
            44,    MAIN.10,    MAIN.372,    0.02989673
            45,    MAIN.11,    MAIN.12,    0.04097857
            46,    MAIN.11,    MAIN.14,    0.06460917
            47,    MAIN.11,    MAIN.20,    0.05979345
C Contact - Face Contactor[MAIN][0]::EA4
            48,    MAIN.11,    MAIN.362,    0.0002132102
            49,    MAIN.11,    MAIN.365,    0.0004974906
            50,    MAIN.11,    MAIN.374,    0.05979345
            51,    MAIN.12,    MAIN.15,    0.03230458
            52,    MAIN.12,    MAIN.21,    0.02989673
C Contact - Face Contactor[MAIN][0]::EA4
            53,    MAIN.12,    MAIN.365,    0.0001066051
            54,    MAIN.12,    MAIN.366,    0.0002887677
            55,    MAIN.12,    MAIN.370,    0.0003602016
            56,    MAIN.12,    MAIN.376,    0.02989673
            57,    MAIN.13,    MAIN.14,    0.08195713
            58,    MAIN.13,    MAIN.16,    0.03230458
            59,    MAIN.13,    MAIN.22,    0.05979345
C Contact - Face Contactor[MAIN][0]::EA4
            60,    MAIN.13,    MAIN.358,    8.004480e-05 
            61,    MAIN.13,    MAIN.367,    0.0001600896
            62,    MAIN.13,    MAIN.371,    0.0005603136
            63,    MAIN.13,    MAIN.378,    0.05979345
            64,    MAIN.14,    MAIN.15,    0.08195713
            65,    MAIN.14,    MAIN.17,    0.06460917
            66,    MAIN.14,    MAIN.23,    0.1195869
            67,    MAIN.14,    MAIN.380,    0.1195869
            68,    MAIN.15,    MAIN.18,    0.03230458
            69,    MAIN.15,    MAIN.24,    0.05979345
C Contact - Face Contactor[MAIN][0]::EA4
            70,    MAIN.15,    MAIN.357,    0.0005603136
            71,    MAIN.15,    MAIN.361,    8.004480e-05 
            72,    MAIN.15,    MAIN.370,    0.0001600896
            73,    MAIN.15,    MAIN.382,    0.05979345
            74,    MAIN.16,    MAIN.17,    0.04097857
            75,    MAIN.16,    MAIN.25,    0.02989673
C Contact - Face Contactor[MAIN][0]::EA4
            76,    MAIN.16,    MAIN.358,    0.000400224
            77,    MAIN.16,    MAIN.359,    0.0003553504
            78,    MAIN.16,    MAIN.384,    0.02989673
            79,    MAIN.17,    MAIN.18,    0.04097857
            80,    MAIN.17,    MAIN.26,    0.05979345
C Contact - Face Contactor[MAIN][0]::EA4
            81,    MAIN.17,    MAIN.359,    0.0002132102
            82,    MAIN.17,    MAIN.360,    0.0004974906
            83,    MAIN.17,    MAIN.386,    0.05979345
            84,    MAIN.18,    MAIN.27,    0.02989673
C Contact - Face Contactor[MAIN][0]::EA4
            85,    MAIN.18,    MAIN.360,    0.0001066051
            86,    MAIN.18,    MAIN.361,    0.0006489693
            87,    MAIN.19,    MAIN.20,    0.02048928
            88,    MAIN.19,    MAIN.22,    0.01615229
C Contact - Face Contactor[MAIN][0]::EA4
            89,    MAIN.19,    MAIN.354,    2.001120e-05 
            90,    MAIN.19,    MAIN.362,    0.0002018477
            91,    MAIN.19,    MAIN.367,    0.0001801008
            92,    MAIN.19,    MAIN.368,    0.0002175525
            93,    MAIN.20,    MAIN.21,    0.02048928
            94,    MAIN.20,    MAIN.23,    0.03230458
C Contact - Face Contactor[MAIN][0]::EA4
            95,    MAIN.20,    MAIN.362,    0.0001211086
            96,    MAIN.20,    MAIN.365,    0.0002825868
            97,    MAIN.20,    MAIN.368,    0.0001305315
            98,    MAIN.20,    MAIN.369,    0.0003045735
            99,    MAIN.21,    MAIN.24,    0.01615229
C Contact - Face Contactor[MAIN][0]::EA4
            100,    MAIN.21,    MAIN.365,    6.055431e-05 
            101,    MAIN.21,    MAIN.366,    0.0001613046
            102,    MAIN.21,    MAIN.369,    6.526575e-05 
            103,    MAIN.21,    MAIN.370,    0.0003323876
            104,    MAIN.22,    MAIN.23,    0.04097857
            105,    MAIN.22,    MAIN.25,    0.01615229
C Contact - Face Contactor[MAIN][0]::EA4
            106,    MAIN.22,    MAIN.355,    0.000338415
            107,    MAIN.22,    MAIN.358,    4.002240e-05 
            108,    MAIN.22,    MAIN.359,    4.834500e-05 
            109,    MAIN.22,    MAIN.367,    8.004480e-05 
            110,    MAIN.22,    MAIN.368,    9.669000e-05 
            111,    MAIN.22,    MAIN.371,    0.0002801568
            112,    MAIN.23,    MAIN.24,    0.04097857
            113,    MAIN.23,    MAIN.26,    0.03230458
C Contact - Face Contactor[MAIN][0]::EA4
            114,    MAIN.23,    MAIN.355,    0.000203049
            115,    MAIN.23,    MAIN.356,    0.000473781
            116,    MAIN.23,    MAIN.359,    2.900700e-05 
            117,    MAIN.23,    MAIN.360,    6.768300e-05 
            118,    MAIN.23,    MAIN.368,    5.801400e-05 
            119,    MAIN.23,    MAIN.369,    0.000135366
            120,    MAIN.24,    MAIN.27,    0.01615229
C Contact - Face Contactor[MAIN][0]::EA4
            121,    MAIN.24,    MAIN.356,    0.0001015245
            122,    MAIN.24,    MAIN.357,    0.0005170473
            123,    MAIN.24,    MAIN.360,    1.450350e-05 
            124,    MAIN.24,    MAIN.361,    7.386390e-05 
            125,    MAIN.24,    MAIN.369,    2.900700e-05 
            126,    MAIN.24,    MAIN.370,    0.0001477278
            127,    MAIN.25,    MAIN.26,    0.02048928
C Contact - Face Contactor[MAIN][0]::EA4
            128,    MAIN.25,    MAIN.358,    0.000200112
            129,    MAIN.25,    MAIN.359,    0.0004194002
            130,    MAIN.26,    MAIN.27,    0.02048928
C Contact - Face Contactor[MAIN][0]::EA4
            131,    MAIN.26,    MAIN.359,    0.0002516401
            132,    MAIN.26,    MAIN.360,    0.0005871603
            133,    MAIN.27,    MAIN.360,    0.0001258201
            134,    MAIN.27,    MAIN.361,    0.0004936921
            135,    MAIN.28,    MAIN.29,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            136,    MAIN.28,    MAIN.87,    11.67429
            137,    MAIN.28,    MAIN.302,    1.218504
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            138,    MAIN.28,    MAIN.321,    0.00036348
            139,    MAIN.28,    MAIN.323,    6.058000e-05 
            140,    MAIN.28,    MAIN.364,    0.2860989
            141,    MAIN.29,    MAIN.30,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            142,    MAIN.29,    MAIN.112,    11.67429
            143,    MAIN.29,    MAIN.303,    1.218504
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            144,    MAIN.29,    MAIN.323,    0.00036348
            145,    MAIN.30,    MAIN.31,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            146,    MAIN.30,    MAIN.132,    11.67429
            147,    MAIN.30,    MAIN.304,    1.218504
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            148,    MAIN.30,    MAIN.323,    0.00018174
            149,    MAIN.30,    MAIN.325,    0.00024232
            150,    MAIN.31,    MAIN.32,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            151,    MAIN.31,    MAIN.152,    11.67429
            152,    MAIN.31,    MAIN.305,    1.218504
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            153,    MAIN.31,    MAIN.325,    0.00036348
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            154,    MAIN.32,    MAIN.86,    4.8
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            155,    MAIN.32,    MAIN.177,    9.837143
            156,    MAIN.32,    MAIN.306,    0.6092518
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            157,    MAIN.49,    MAIN.50,    3.6
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            158,    MAIN.49,    MAIN.53,    9.837143
            159,    MAIN.49,    MAIN.104,    0.6092518
            160,    MAIN.49,    MAIN.264,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            161,    MAIN.49,    MAIN.288,    8.
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            162,    MAIN.50,    MAIN.53,    4.8
            163,    MAIN.50,    MAIN.104,    1.8
            164,    MAIN.50,    MAIN.105,    0.835
            165,    MAIN.50,    MAIN.265,    0.835
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            166,    MAIN.50,    MAIN.288,    1.8
            167,    MAIN.50,    MAIN.354,    167.
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            168,    MAIN.50,    MAIN.383,    0.000713269
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            169,    MAIN.51,    MAIN.88,    1.8
            170,    MAIN.51,    MAIN.106,    0.835
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            171,    MAIN.51,    MAIN.154,    3.6
            172,    MAIN.51,    MAIN.164,    1.8
            173,    MAIN.51,    MAIN.266,    0.835
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            174,    MAIN.51,    MAIN.283,    4.8
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            175,    MAIN.52,    MAIN.93,    8.
            176,    MAIN.52,    MAIN.107,    0.6092518
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            177,    MAIN.52,    MAIN.138,    9.837143
            178,    MAIN.52,    MAIN.267,    0.2860989
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            179,    MAIN.52,    MAIN.326,    4.2
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -180,    MAIN.52,    MAIN.330,    0.00012116
            181,    MAIN.53,    MAIN.108,    0.2860989
            182,    MAIN.53,    MAIN.288,    0.6092518
            183,    MAIN.54,    MAIN.59,    1.218504
            184,    MAIN.54,    MAIN.74,    0.5721977
            185,    MAIN.54,    MAIN.269,    0.5721977
            186,    MAIN.54,    MAIN.284,    1.218504
            187,    MAIN.55,    MAIN.60,    0.835
            188,    MAIN.55,    MAIN.67,    0.835
            189,    MAIN.55,    MAIN.270,    0.835
            190,    MAIN.55,    MAIN.285,    0.835
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            191,    MAIN.55,    MAIN.377,    0.0007976078
            192,    MAIN.55,    MAIN.385,    0.0004476604
            193,    MAIN.56,    MAIN.61,    0.835
            194,    MAIN.56,    MAIN.76,    0.835
            195,    MAIN.56,    MAIN.271,    0.835
            196,    MAIN.56,    MAIN.286,    0.835
            197,    MAIN.57,    MAIN.62,    1.218504
            198,    MAIN.57,    MAIN.77,    0.5721977
            199,    MAIN.57,    MAIN.272,    0.5721977
            200,    MAIN.57,    MAIN.287,    1.218504
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -201,    MAIN.57,    MAIN.330,    0.00048464
            -202,    MAIN.57,    MAIN.341,    0.0009692799
            203,    MAIN.58,    MAIN.63,    0.5721977
            204,    MAIN.58,    MAIN.98,    1.218504
            205,    MAIN.58,    MAIN.108,    1.218504
            206,    MAIN.58,    MAIN.288,    0.5721977
            207,    MAIN.59,    MAIN.64,    1.218504
            208,    MAIN.59,    MAIN.79,    0.5721977
            209,    MAIN.59,    MAIN.274,    0.5721977
            210,    MAIN.60,    MAIN.65,    0.835
            211,    MAIN.60,    MAIN.68,    0.835
            212,    MAIN.60,    MAIN.275,    0.835
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            213,    MAIN.60,    MAIN.379,    0.0007976078
            214,    MAIN.60,    MAIN.387,    0.0004476604
            215,    MAIN.61,    MAIN.66,    0.835
            216,    MAIN.61,    MAIN.81,    0.835
            217,    MAIN.61,    MAIN.276,    0.835
            218,    MAIN.62,    MAIN.82,    0.5721977
            219,    MAIN.62,    MAIN.277,    0.5721977
            220,    MAIN.62,    MAIN.327,    1.218504
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -221,    MAIN.62,    MAIN.339,    0.00048464
            -222,    MAIN.62,    MAIN.343,    0.0009692799
            223,    MAIN.63,    MAIN.103,    1.218504
            224,    MAIN.63,    MAIN.163,    1.218504
            225,    MAIN.63,    MAIN.328,    0.5721977
            226,    MAIN.64,    MAIN.84,    0.2860989
            227,    MAIN.64,    MAIN.279,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            228,    MAIN.64,    MAIN.308,    11.67429
            229,    MAIN.65,    MAIN.69,    0.835
            230,    MAIN.65,    MAIN.280,    0.835
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            231,    MAIN.65,    MAIN.298,    6.
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            232,    MAIN.65,    MAIN.387,    0.001065947
            233,    MAIN.66,    MAIN.86,    0.835
            234,    MAIN.66,    MAIN.281,    0.835
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            235,    MAIN.66,    MAIN.306,    6.
            236,    MAIN.67,    MAIN.68,    0.835
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            237,    MAIN.67,    MAIN.107,    6.
            238,    MAIN.67,    MAIN.326,    0.835
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            239,    MAIN.67,    MAIN.385,    0.001065947
            240,    MAIN.68,    MAIN.69,    0.835
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            241,    MAIN.68,    MAIN.162,    6.
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            242,    MAIN.68,    MAIN.387,    0.001065947
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            243,    MAIN.69,    MAIN.162,    1.8
            244,    MAIN.69,    MAIN.217,    4.2
            245,    MAIN.69,    MAIN.298,    1.8
            246,    MAIN.69,    MAIN.307,    4.2
            247,    MAIN.69,    MAIN.361,    167.
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            248,    MAIN.69,    MAIN.387,    0.000713269
            249,    MAIN.71,    MAIN.76,    0.835
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            250,    MAIN.71,    MAIN.133,    1.8
            251,    MAIN.71,    MAIN.157,    3.6
            252,    MAIN.71,    MAIN.167,    1.8
            253,    MAIN.71,    MAIN.178,    4.8
            254,    MAIN.71,    MAIN.286,    0.835
            255,    MAIN.72,    MAIN.77,    1.218504
            256,    MAIN.72,    MAIN.92,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            257,    MAIN.72,    MAIN.153,    11.67429
            258,    MAIN.72,    MAIN.287,    0.2860989
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -259,    MAIN.72,    MAIN.341,    0.00036348
            -260,    MAIN.72,    MAIN.345,    6.058000e-05 
            261,    MAIN.73,    MAIN.78,    0.5721977
            262,    MAIN.73,    MAIN.118,    1.218504
            263,    MAIN.73,    MAIN.268,    1.218504
            264,    MAIN.73,    MAIN.328,    0.5721977
            265,    MAIN.74,    MAIN.79,    1.218504
            266,    MAIN.74,    MAIN.94,    0.5721977
            267,    MAIN.74,    MAIN.329,    1.218504
            268,    MAIN.76,    MAIN.81,    0.835
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            269,    MAIN.76,    MAIN.167,    6.
            270,    MAIN.77,    MAIN.82,    1.218504
            271,    MAIN.77,    MAIN.97,    0.5721977
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -272,    MAIN.77,    MAIN.341,    0.00145392
            -273,    MAIN.77,    MAIN.345,    0.00024232
            274,    MAIN.78,    MAIN.83,    0.5721977
            275,    MAIN.78,    MAIN.123,    1.218504
            276,    MAIN.78,    MAIN.273,    1.218504
            277,    MAIN.79,    MAIN.84,    1.218504
            278,    MAIN.79,    MAIN.99,    0.5721977
            279,    MAIN.81,    MAIN.86,    0.835
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            280,    MAIN.81,    MAIN.172,    6.
            281,    MAIN.82,    MAIN.87,    1.218504
            282,    MAIN.82,    MAIN.102,    0.5721977
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -283,    MAIN.82,    MAIN.343,    0.00145392
            -284,    MAIN.82,    MAIN.347,    0.00024232
            285,    MAIN.83,    MAIN.88,    0.5721977
            286,    MAIN.83,    MAIN.128,    1.218504
            287,    MAIN.83,    MAIN.278,    1.218504
            288,    MAIN.84,    MAIN.109,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            289,    MAIN.84,    MAIN.309,    11.67429
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            290,    MAIN.86,    MAIN.172,    1.8
            291,    MAIN.86,    MAIN.177,    3.6
            292,    MAIN.86,    MAIN.306,    1.8
            293,    MAIN.87,    MAIN.112,    0.2860989
            294,    MAIN.87,    MAIN.327,    0.2860989
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -295,    MAIN.87,    MAIN.343,    0.00036348
            -296,    MAIN.87,    MAIN.347,    6.058000e-05 
            297,    MAIN.88,    MAIN.133,    0.6092518
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            298,    MAIN.88,    MAIN.154,    8.
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            299,    MAIN.88,    MAIN.266,    6.
            300,    MAIN.88,    MAIN.283,    0.6092518
            301,    MAIN.89,    MAIN.94,    1.218504
            302,    MAIN.89,    MAIN.114,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            303,    MAIN.89,    MAIN.268,    11.67429
            304,    MAIN.89,    MAIN.329,    0.2860989
            305,    MAIN.92,    MAIN.97,    1.218504
            306,    MAIN.92,    MAIN.117,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            307,    MAIN.92,    MAIN.158,    11.67429
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -308,    MAIN.92,    MAIN.345,    0.00036348
            309,    MAIN.93,    MAIN.98,    0.5721977
            310,    MAIN.93,    MAIN.138,    0.6092518
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            311,    MAIN.93,    MAIN.285,    6.
            312,    MAIN.93,    MAIN.288,    0.6092518
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            313,    MAIN.93,    MAIN.326,    1.8
            314,    MAIN.94,    MAIN.99,    1.218504
            315,    MAIN.94,    MAIN.119,    0.5721977
            316,    MAIN.97,    MAIN.102,    1.218504
            317,    MAIN.97,    MAIN.122,    0.5721977
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -318,    MAIN.97,    MAIN.345,    0.00145392
            319,    MAIN.98,    MAIN.103,    0.5721977
            320,    MAIN.98,    MAIN.143,    1.218504
            321,    MAIN.99,    MAIN.109,    1.218504
            322,    MAIN.99,    MAIN.124,    0.5721977
            323,    MAIN.102,    MAIN.112,    1.218504
            324,    MAIN.102,    MAIN.127,    0.5721977
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -325,    MAIN.102,    MAIN.347,    0.00145392
            326,    MAIN.103,    MAIN.113,    0.5721977
            327,    MAIN.103,    MAIN.148,    1.218504
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            328,    MAIN.104,    MAIN.105,    6.
            329,    MAIN.104,    MAIN.159,    0.6092518
            330,    MAIN.104,    MAIN.269,    0.5721977
            331,    MAIN.105,    MAIN.160,    0.835
            332,    MAIN.105,    MAIN.270,    0.835
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            333,    MAIN.105,    MAIN.383,    0.001065947
            334,    MAIN.106,    MAIN.161,    0.835
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            335,    MAIN.106,    MAIN.164,    6.
            336,    MAIN.106,    MAIN.271,    0.835
            337,    MAIN.107,    MAIN.162,    0.6092518
            338,    MAIN.107,    MAIN.272,    0.5721977
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            339,    MAIN.107,    MAIN.326,    1.8
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -340,    MAIN.107,    MAIN.330,    0.00048464
            341,    MAIN.108,    MAIN.163,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            342,    MAIN.108,    MAIN.264,    11.67429
            343,    MAIN.109,    MAIN.129,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            344,    MAIN.109,    MAIN.310,    11.67429
            345,    MAIN.112,    MAIN.132,    0.2860989
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -346,    MAIN.112,    MAIN.347,    0.00036348
            347,    MAIN.113,    MAIN.118,    0.5721977
            348,    MAIN.113,    MAIN.153,    1.218504
            349,    MAIN.113,    MAIN.328,    1.218504
            350,    MAIN.114,    MAIN.119,    1.218504
            351,    MAIN.114,    MAIN.134,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            352,    MAIN.114,    MAIN.273,    11.67429
            353,    MAIN.117,    MAIN.122,    1.218504
            354,    MAIN.117,    MAIN.137,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            355,    MAIN.117,    MAIN.168,    11.67429
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -356,    MAIN.117,    MAIN.345,    0.00018174
            -357,    MAIN.117,    MAIN.349,    0.00024232
            358,    MAIN.118,    MAIN.123,    0.5721977
            359,    MAIN.118,    MAIN.158,    1.218504
            360,    MAIN.119,    MAIN.124,    1.218504
            361,    MAIN.119,    MAIN.139,    0.5721977
            362,    MAIN.122,    MAIN.127,    1.218504
            363,    MAIN.122,    MAIN.142,    0.5721977
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -364,    MAIN.122,    MAIN.345,    0.00072696
            -365,    MAIN.122,    MAIN.349,    0.0009692799
            366,    MAIN.123,    MAIN.128,    0.5721977
            367,    MAIN.123,    MAIN.168,    1.218504
            368,    MAIN.124,    MAIN.129,    1.218504
            369,    MAIN.124,    MAIN.144,    0.5721977
            370,    MAIN.127,    MAIN.132,    1.218504
            371,    MAIN.127,    MAIN.147,    0.5721977
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -372,    MAIN.127,    MAIN.347,    0.00072696
            -373,    MAIN.127,    MAIN.351,    0.0009692799
            374,    MAIN.128,    MAIN.133,    0.5721977
            375,    MAIN.128,    MAIN.173,    1.218504
            376,    MAIN.129,    MAIN.149,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            377,    MAIN.129,    MAIN.311,    11.67429
            378,    MAIN.132,    MAIN.152,    0.2860989
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -379,    MAIN.132,    MAIN.347,    0.00018174
            -380,    MAIN.132,    MAIN.351,    0.00024232
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            381,    MAIN.133,    MAIN.157,    8.
            382,    MAIN.133,    MAIN.178,    0.6092518
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            383,    MAIN.133,    MAIN.286,    6.
            384,    MAIN.134,    MAIN.139,    1.218504
            385,    MAIN.134,    MAIN.154,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            386,    MAIN.134,    MAIN.278,    11.67429
            387,    MAIN.137,    MAIN.142,    1.218504
            388,    MAIN.137,    MAIN.157,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            389,    MAIN.137,    MAIN.173,    11.67429
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -390,    MAIN.137,    MAIN.349,    0.00036348
            391,    MAIN.138,    MAIN.143,    0.2860989
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            392,    MAIN.138,    MAIN.326,    4.2
            393,    MAIN.139,    MAIN.144,    1.218504
            394,    MAIN.139,    MAIN.164,    0.5721977
            395,    MAIN.142,    MAIN.147,    1.218504
            396,    MAIN.142,    MAIN.167,    0.5721977
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -397,    MAIN.142,    MAIN.349,    0.00145392
            398,    MAIN.143,    MAIN.148,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            399,    MAIN.143,    MAIN.267,    11.67429
            400,    MAIN.144,    MAIN.149,    1.218504
            401,    MAIN.144,    MAIN.169,    0.5721977
            402,    MAIN.147,    MAIN.152,    1.218504
            403,    MAIN.147,    MAIN.172,    0.5721977
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -404,    MAIN.147,    MAIN.351,    0.00145392
            405,    MAIN.148,    MAIN.153,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            406,    MAIN.148,    MAIN.287,    11.67429
            407,    MAIN.149,    MAIN.174,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            408,    MAIN.149,    MAIN.312,    11.67429
            409,    MAIN.152,    MAIN.177,    0.2860989
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -410,    MAIN.152,    MAIN.351,    0.00036348
            411,    MAIN.153,    MAIN.158,    0.2860989
            412,    MAIN.154,    MAIN.164,    0.6092518
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            413,    MAIN.154,    MAIN.283,    9.837143
            414,    MAIN.157,    MAIN.167,    0.6092518
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            415,    MAIN.157,    MAIN.178,    9.837143
            416,    MAIN.158,    MAIN.168,    0.2860989
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            417,    MAIN.159,    MAIN.160,    6.
            418,    MAIN.159,    MAIN.214,    0.6092518
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            419,    MAIN.159,    MAIN.215,    1.8
            420,    MAIN.159,    MAIN.274,    0.5721977
            421,    MAIN.160,    MAIN.215,    0.835
            422,    MAIN.160,    MAIN.275,    0.835
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            423,    MAIN.160,    MAIN.381,    0.001065947
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            424,    MAIN.161,    MAIN.169,    6.
            425,    MAIN.161,    MAIN.216,    0.835
            426,    MAIN.161,    MAIN.276,    0.835
            427,    MAIN.162,    MAIN.217,    0.6092518
            428,    MAIN.162,    MAIN.277,    0.5721977
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -429,    MAIN.162,    MAIN.339,    0.00048464
            430,    MAIN.163,    MAIN.218,    0.2860989
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            431,    MAIN.163,    MAIN.284,    11.67429
            432,    MAIN.164,    MAIN.169,    0.6092518
            433,    MAIN.167,    MAIN.172,    0.6092518
            434,    MAIN.168,    MAIN.173,    0.2860989
            435,    MAIN.169,    MAIN.174,    0.6092518
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            436,    MAIN.169,    MAIN.216,    1.8
            437,    MAIN.172,    MAIN.177,    0.6092518
            438,    MAIN.173,    MAIN.178,    0.2860989
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            439,    MAIN.174,    MAIN.216,    4.8
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            440,    MAIN.174,    MAIN.297,    8.
            441,    MAIN.174,    MAIN.313,    9.837143
            442,    MAIN.177,    MAIN.306,    8.
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            443,    MAIN.214,    MAIN.215,    4.2
            444,    MAIN.214,    MAIN.279,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            445,    MAIN.214,    MAIN.289,    9.837143
            446,    MAIN.214,    MAIN.314,    8.
            447,    MAIN.215,    MAIN.280,    0.835
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            448,    MAIN.215,    MAIN.289,    4.2
            449,    MAIN.215,    MAIN.314,    1.8
            450,    MAIN.215,    MAIN.366,    167.
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            451,    MAIN.215,    MAIN.381,    0.000713269
            452,    MAIN.216,    MAIN.281,    0.835
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            453,    MAIN.216,    MAIN.297,    1.8
            454,    MAIN.216,    MAIN.313,    3.6
            455,    MAIN.217,    MAIN.282,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            456,    MAIN.217,    MAIN.298,    8.
            457,    MAIN.217,    MAIN.307,    9.837143
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -458,    MAIN.217,    MAIN.339,    0.00012116
            459,    MAIN.218,    MAIN.268,    0.2860989
            460,    MAIN.218,    MAIN.328,    1.218504
C Contact - Edge Contactor--X Face Edge Contactors [MAIN][0]::D5E
            461,    MAIN.218,    MAIN.329,    11.67429
            462,    MAIN.264,    MAIN.269,    1.218504
            463,    MAIN.264,    MAIN.284,    0.2860989
            464,    MAIN.265,    MAIN.270,    0.835
            465,    MAIN.265,    MAIN.285,    0.835
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            466,    MAIN.265,    MAIN.288,    6.
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            467,    MAIN.265,    MAIN.383,    0.001065947
            468,    MAIN.266,    MAIN.271,    0.835
            469,    MAIN.266,    MAIN.286,    0.835
            470,    MAIN.267,    MAIN.272,    1.218504
            471,    MAIN.267,    MAIN.287,    0.2860989
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -472,    MAIN.267,    MAIN.330,    0.00036348
            473,    MAIN.268,    MAIN.273,    0.2860989
            474,    MAIN.269,    MAIN.274,    1.218504
            475,    MAIN.270,    MAIN.275,    0.835
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            476,    MAIN.270,    MAIN.375,    0.0007976078
            477,    MAIN.270,    MAIN.383,    0.0004476604
            478,    MAIN.271,    MAIN.276,    0.835
            479,    MAIN.272,    MAIN.277,    1.218504
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -480,    MAIN.272,    MAIN.330,    0.00145392
            481,    MAIN.273,    MAIN.278,    0.2860989
            482,    MAIN.274,    MAIN.279,    1.218504
            483,    MAIN.275,    MAIN.280,    0.835
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            484,    MAIN.275,    MAIN.373,    0.0007976078
            485,    MAIN.275,    MAIN.381,    0.0004476604
            486,    MAIN.276,    MAIN.281,    0.835
            487,    MAIN.277,    MAIN.282,    1.218504
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -488,    MAIN.277,    MAIN.339,    0.00145392
            489,    MAIN.278,    MAIN.283,    0.2860989
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            490,    MAIN.279,    MAIN.301,    11.67429
C Contact - Edge Contactor--Z Face Edge Contactors[MAIN][1]::D5B
            491,    MAIN.280,    MAIN.314,    6.
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            492,    MAIN.280,    MAIN.381,    0.001065947
C Contact - Edge Contactor-+Z Face Edge Contactors[MAIN][0]::D5C
            493,    MAIN.281,    MAIN.297,    6.
            494,    MAIN.282,    MAIN.327,    0.2860989
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -495,    MAIN.282,    MAIN.339,    0.00036348
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            496,    MAIN.282,    MAIN.363,    11.67429
            497,    MAIN.284,    MAIN.329,    0.2860989
            498,    MAIN.285,    MAIN.326,    0.835
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            499,    MAIN.285,    MAIN.385,    0.001065947
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -500,    MAIN.287,    MAIN.330,    0.00012116
            -501,    MAIN.287,    MAIN.341,    0.00024232
            502,    MAIN.289,    MAIN.301,    0.2860989
            503,    MAIN.289,    MAIN.314,    0.6092518
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            504,    MAIN.289,    MAIN.315,    0.00012116
            505,    MAIN.291,    MAIN.292,    0.5721977
            506,    MAIN.291,    MAIN.299,    1.218504
            507,    MAIN.291,    MAIN.301,    1.218504
            508,    MAIN.291,    MAIN.314,    0.5721977
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            509,    MAIN.291,    MAIN.315,    0.00145392
            510,    MAIN.292,    MAIN.293,    0.5721977
            511,    MAIN.292,    MAIN.300,    1.218504
            512,    MAIN.292,    MAIN.308,    1.218504
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            513,    MAIN.292,    MAIN.315,    0.00048464
            514,    MAIN.292,    MAIN.320,    0.0009692799
            515,    MAIN.293,    MAIN.294,    0.5721977
            516,    MAIN.293,    MAIN.302,    1.218504
            517,    MAIN.293,    MAIN.309,    1.218504
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            518,    MAIN.293,    MAIN.320,    0.00145392
            519,    MAIN.293,    MAIN.322,    0.00024232
            520,    MAIN.294,    MAIN.295,    0.5721977
            521,    MAIN.294,    MAIN.303,    1.218504
            522,    MAIN.294,    MAIN.310,    1.218504
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            523,    MAIN.294,    MAIN.322,    0.00145392
            524,    MAIN.295,    MAIN.296,    0.5721977
            525,    MAIN.295,    MAIN.304,    1.218504
            526,    MAIN.295,    MAIN.311,    1.218504
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            527,    MAIN.295,    MAIN.322,    0.00072696
            528,    MAIN.295,    MAIN.324,    0.0009692799
            529,    MAIN.296,    MAIN.297,    0.5721977
            530,    MAIN.296,    MAIN.305,    1.218504
            531,    MAIN.296,    MAIN.312,    1.218504
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            532,    MAIN.296,    MAIN.324,    0.00145392
            533,    MAIN.297,    MAIN.306,    0.6092518
            534,    MAIN.297,    MAIN.313,    0.6092518
            535,    MAIN.298,    MAIN.299,    0.5721977
            536,    MAIN.298,    MAIN.307,    0.6092518
            537,    MAIN.298,    MAIN.314,    0.6092518
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            538,    MAIN.298,    MAIN.319,    0.00048464
            539,    MAIN.299,    MAIN.300,    0.5721977
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            540,    MAIN.299,    MAIN.319,    0.00145392
            541,    MAIN.299,    MAIN.363,    1.218504
            542,    MAIN.300,    MAIN.302,    0.5721977
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            543,    MAIN.300,    MAIN.319,    0.00048464
            544,    MAIN.300,    MAIN.321,    0.0009692799
            545,    MAIN.300,    MAIN.364,    1.218504
            546,    MAIN.301,    MAIN.308,    0.2860989
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            547,    MAIN.301,    MAIN.315,    0.00036348
            548,    MAIN.302,    MAIN.303,    0.5721977
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            549,    MAIN.302,    MAIN.321,    0.00145392
            550,    MAIN.302,    MAIN.323,    0.00024232
            551,    MAIN.303,    MAIN.304,    0.5721977
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            552,    MAIN.303,    MAIN.323,    0.00145392
            553,    MAIN.304,    MAIN.305,    0.5721977
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            554,    MAIN.304,    MAIN.323,    0.00072696
            555,    MAIN.304,    MAIN.325,    0.0009692799
            556,    MAIN.305,    MAIN.306,    0.5721977
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            557,    MAIN.305,    MAIN.325,    0.00145392
            558,    MAIN.307,    MAIN.319,    0.00012116
            559,    MAIN.307,    MAIN.363,    0.2860989
            560,    MAIN.308,    MAIN.309,    0.2860989
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            561,    MAIN.308,    MAIN.315,    0.00012116
            562,    MAIN.308,    MAIN.320,    0.00024232
            563,    MAIN.309,    MAIN.310,    0.2860989
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            564,    MAIN.309,    MAIN.320,    0.00036348
            565,    MAIN.309,    MAIN.322,    6.058000e-05 
            566,    MAIN.310,    MAIN.311,    0.2860989
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            567,    MAIN.310,    MAIN.322,    0.00036348
            568,    MAIN.311,    MAIN.312,    0.2860989
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            569,    MAIN.311,    MAIN.322,    0.00018174
            570,    MAIN.311,    MAIN.324,    0.00024232
            571,    MAIN.312,    MAIN.313,    0.2860989
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            572,    MAIN.312,    MAIN.324,    0.00036348
            573,    MAIN.314,    MAIN.315,    0.00048464
            574,    MAIN.315,    MAIN.319,    0.001113158
            575,    MAIN.315,    MAIN.320,    0.0003105976
            576,    MAIN.319,    MAIN.321,    0.0003105976
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            577,    MAIN.319,    MAIN.363,    0.00036348
            578,    MAIN.319,    MAIN.364,    0.00012116
            579,    MAIN.320,    MAIN.321,    0.001113158
            580,    MAIN.320,    MAIN.322,    0.0003105976
            581,    MAIN.321,    MAIN.323,    0.0003105976
C Contact - Face Contactor-+X Face +X Solar PCB Face Contactor[MAIN][0]::D5F
            582,    MAIN.321,    MAIN.364,    0.00024232
            583,    MAIN.322,    MAIN.323,    0.001113158
            584,    MAIN.322,    MAIN.324,    0.0003105976
            585,    MAIN.323,    MAIN.325,    0.0003105976
            586,    MAIN.324,    MAIN.325,    0.001113158
            587,    MAIN.326,    MAIN.358,    167.
C Contact - Face Contactor--Z Face to -Z Patch Antenna[MAIN][0]::EC8
C Contact - Face Contactor--Z Patch Antenna to -Z Face[MAIN][0]::EC9
            588,    MAIN.326,    MAIN.385,    0.000713269
C Contact - Face Contactor-+Z Face +Z Solar PCB Face Contactor[MAIN][1]::D61
            -589,    MAIN.327,    MAIN.339,    0.00012116
            -590,    MAIN.327,    MAIN.343,    0.00024232
C Contact - Edge Contactor-+X Face Edge Contactors[MAIN][0]::D5D
            591,    MAIN.327,    MAIN.364,    11.67429
            592,    MAIN.330,    MAIN.339,    0.001113158
            593,    MAIN.330,    MAIN.341,    0.0003105976
            594,    MAIN.331,    MAIN.340,    0.000434046
            595,    MAIN.331,    MAIN.346,    0.0004908606
            596,    MAIN.331,    MAIN.354,    167.
            597,    MAIN.332,    MAIN.333,    0.000434046
            598,    MAIN.332,    MAIN.336,    0.0004908606
            599,    MAIN.332,    MAIN.348,    0.0004908606
            600,    MAIN.332,    MAIN.353,    0.000434046
            601,    MAIN.333,    MAIN.334,    0.000434046
            602,    MAIN.333,    MAIN.337,    0.0004908606
            603,    MAIN.333,    MAIN.350,    0.0004908606
            604,    MAIN.334,    MAIN.338,    0.0004908606
            605,    MAIN.334,    MAIN.352,    0.0004908606
            606,    MAIN.335,    MAIN.336,    0.000434046
            607,    MAIN.335,    MAIN.353,    0.0004908606
            608,    MAIN.335,    MAIN.358,    167.
            609,    MAIN.336,    MAIN.337,    0.000434046
            610,    MAIN.337,    MAIN.338,    0.000434046
            611,    MAIN.338,    MAIN.361,    167.
            612,    MAIN.339,    MAIN.343,    0.0003105976
            613,    MAIN.340,    MAIN.342,    0.000434046
            614,    MAIN.340,    MAIN.348,    0.0004908606
            615,    MAIN.341,    MAIN.343,    0.001113158
            616,    MAIN.341,    MAIN.345,    0.0003105976
            617,    MAIN.342,    MAIN.344,    0.000434046
            618,    MAIN.342,    MAIN.350,    0.0004908606
            619,    MAIN.343,    MAIN.347,    0.0003105976
            620,    MAIN.344,    MAIN.352,    0.0004908606
            621,    MAIN.344,    MAIN.366,    167.
            622,    MAIN.345,    MAIN.347,    0.001113158
            623,    MAIN.345,    MAIN.349,    0.0003105976
            624,    MAIN.346,    MAIN.348,    0.000434046
            625,    MAIN.346,    MAIN.353,    0.0004908606
            626,    MAIN.347,    MAIN.351,    0.0003105976
            627,    MAIN.348,    MAIN.350,    0.000434046
            628,    MAIN.349,    MAIN.351,    0.001113158
            629,    MAIN.350,    MAIN.352,    0.000434046
            630,    MAIN.354,    MAIN.362,    0.000434046
            631,    MAIN.354,    MAIN.367,    0.0004908606
C Contact - Face Contactor[MAIN][0]::EA4
            632,    MAIN.354,    MAIN.372,    2.001120e-05 
            633,    MAIN.355,    MAIN.356,    0.000434046
            634,    MAIN.355,    MAIN.359,    0.0004908606
            635,    MAIN.355,    MAIN.368,    0.0004908606
            636,    MAIN.355,    MAIN.371,    0.000434046
C Contact - Face Contactor[MAIN][0]::EA4
            637,    MAIN.355,    MAIN.378,    0.000338415
            638,    MAIN.355,    MAIN.380,    0.000203049
            639,    MAIN.356,    MAIN.357,    0.000434046
            640,    MAIN.356,    MAIN.360,    0.0004908606
            641,    MAIN.356,    MAIN.369,    0.0004908606
C Contact - Face Contactor[MAIN][0]::EA4
            642,    MAIN.356,    MAIN.380,    0.000473781
            643,    MAIN.356,    MAIN.382,    0.0001015245
            644,    MAIN.357,    MAIN.361,    0.0004908606
            645,    MAIN.357,    MAIN.370,    0.0004908606
C Contact - Face Contactor[MAIN][0]::EA4
            646,    MAIN.357,    MAIN.382,    0.0005170473
            647,    MAIN.358,    MAIN.359,    0.000434046
            648,    MAIN.358,    MAIN.371,    0.0004908606
C Contact - Face Contactor[MAIN][0]::EA4
            649,    MAIN.358,    MAIN.378,    4.002240e-05 
            650,    MAIN.358,    MAIN.384,    0.000200112
            651,    MAIN.359,    MAIN.360,    0.000434046
C Contact - Face Contactor[MAIN][0]::EA4
            652,    MAIN.359,    MAIN.378,    4.834500e-05 
            653,    MAIN.359,    MAIN.380,    2.900700e-05 
            654,    MAIN.359,    MAIN.384,    0.0004194002
            655,    MAIN.359,    MAIN.386,    0.0002516401
            656,    MAIN.360,    MAIN.361,    0.000434046
C Contact - Face Contactor[MAIN][0]::EA4
            657,    MAIN.360,    MAIN.380,    6.768300e-05 
            658,    MAIN.360,    MAIN.382,    1.450350e-05 
            659,    MAIN.360,    MAIN.386,    0.0005871603
            660,    MAIN.361,    MAIN.382,    7.386390e-05 
            661,    MAIN.362,    MAIN.365,    0.000434046
            662,    MAIN.362,    MAIN.368,    0.0004908606
C Contact - Face Contactor[MAIN][0]::EA4
            663,    MAIN.362,    MAIN.372,    0.0002018477
            664,    MAIN.362,    MAIN.374,    0.0001211086
            665,    MAIN.363,    MAIN.364,    0.2860989
            666,    MAIN.365,    MAIN.366,    0.000434046
            667,    MAIN.365,    MAIN.369,    0.0004908606
C Contact - Face Contactor[MAIN][0]::EA4
            668,    MAIN.365,    MAIN.374,    0.0002825868
            669,    MAIN.365,    MAIN.376,    6.055431e-05 
            670,    MAIN.366,    MAIN.370,    0.0004908606
C Contact - Face Contactor[MAIN][0]::EA4
            671,    MAIN.366,    MAIN.376,    0.0001613046
            672,    MAIN.367,    MAIN.368,    0.000434046
            673,    MAIN.367,    MAIN.371,    0.0004908606
C Contact - Face Contactor[MAIN][0]::EA4
            674,    MAIN.367,    MAIN.372,    0.0001801008
            675,    MAIN.367,    MAIN.378,    8.004480e-05 
            676,    MAIN.368,    MAIN.369,    0.000434046
C Contact - Face Contactor[MAIN][0]::EA4
            677,    MAIN.368,    MAIN.372,    0.0002175525
            678,    MAIN.368,    MAIN.374,    0.0001305315
            679,    MAIN.368,    MAIN.378,    9.669000e-05 
            680,    MAIN.368,    MAIN.380,    5.801400e-05 
            681,    MAIN.369,    MAIN.370,    0.000434046
C Contact - Face Contactor[MAIN][0]::EA4
            682,    MAIN.369,    MAIN.374,    0.0003045735
            683,    MAIN.369,    MAIN.376,    6.526575e-05 
            684,    MAIN.369,    MAIN.380,    0.000135366
            685,    MAIN.369,    MAIN.382,    2.900700e-05 
            686,    MAIN.370,    MAIN.376,    0.0003323876
            687,    MAIN.370,    MAIN.382,    0.0001477278
            688,    MAIN.371,    MAIN.378,    0.0002801568
            689,    MAIN.372,    MAIN.374,    0.02048928
            690,    MAIN.372,    MAIN.378,    0.01615229
            691,    MAIN.373,    MAIN.375,    0.6591561
            692,    MAIN.373,    MAIN.379,    0.6591561
            693,    MAIN.373,    MAIN.381,    0.7402077
            694,    MAIN.374,    MAIN.376,    0.02048928
            695,    MAIN.374,    MAIN.380,    0.03230458
            696,    MAIN.375,    MAIN.377,    0.6591561
            697,    MAIN.375,    MAIN.383,    0.7402077
            698,    MAIN.376,    MAIN.382,    0.01615229
            699,    MAIN.377,    MAIN.379,    0.6591561
            700,    MAIN.377,    MAIN.385,    0.7402077
            701,    MAIN.378,    MAIN.380,    0.04097857
            702,    MAIN.378,    MAIN.384,    0.01615229
            703,    MAIN.379,    MAIN.387,    0.7402077
            704,    MAIN.380,    MAIN.382,    0.04097857
            705,    MAIN.380,    MAIN.386,    0.03230458
            706,    MAIN.381,    MAIN.383,    0.2197187
            707,    MAIN.381,    MAIN.387,    0.2197187
            708,    MAIN.383,    MAIN.385,    0.2197187
            709,    MAIN.384,    MAIN.386,    0.02048928
            710,    MAIN.385,    MAIN.387,    0.2197187
HEADER VARIABLES 0, MAIN
F     CALL TD_HEATLOAD1_MAIN()
HEADER NODE DATA, SPACE
            -1,    2.73,    -1.0
HEADER SUBROUTINE
      SUBROUTINE TDHTR
C     This routine is to hold heaters at their midpoint temps
C     for steady state solutions.
      RETURN
      END
      SUBROUTINE TDREL
C     This routine is to release heaters for transient runs
C     for steady state solutions.
F     RETURN
F     END
F     SUBROUTINE TDHTOT
C     This routine prints out heater ontime and cycle summaries
F     RETURN
F     END
F     SUBROUTINE TDHTRST
C     This routine resets heater statistics
F     RETURN
F     END
F     SUBROUTINE TDPREBL
C     This routine executes logic before the build statement
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE TDPOSTBL
C     This routine executes logic after the build statement
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE TDPOSTSL
C     This routine executes logic after the solution
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE UDAINIT
C     This routine initializes all of the User Defined Arrays
F     USE RCONV_MOD
M     CALL COMMON
F     ACCELCON = 1.000000
F     CALL SINDA_OMP_THREADS(8)
F      TD_THERMAL_TIME_STEP = ALLOCUAC('TD_THERMAL_TIME_STEP',1,'',132)
M      UDCA(TD_THERMAL_TIME_STEP)%CA = '                                                        '//
F    .'                                                                            '
F     RETURN
F     END
F     SUBROUTINE BASEPLOT
      CALL COMMON
F     RETURN
F     END
F     SUBROUTINE TD_HEATLOAD1_MAIN()
M     CALL COMMON
F     INTEGER NODE_IDS(27),node_ptr(27),DO_INIT
F     REAL HEATLOADS(27)
F     SAVE NODE_PTR, DO_INIT
F	 DATA DO_INIT/0/
FSTART
      DATA (NODE_IDS(J__TD), J__TD=1,27) /
     +9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,372,374,376,378,380,382,384,386
     +/
      DATA (HEATLOADS(J__TD), J__TD=1,27) /
     +0.015625,0.03125,0.0625,0.03125,0.0625,0.125,0.0625,
     +0.03125,0.0625,0.03125,0.015625,0.03125,0.015625,0.03125,
     +0.0625,0.03125,0.015625,0.03125,0.015625,0.015625,0.03125,
     +0.015625,0.03125,0.0625,0.03125,0.015625,0.03125
     +/
FSTOP
F	 IF(DO_INIT .EQ.0)THEN
F	   DO_INIT= 1
F	   DO K__TD=1,27
F	     NODE_PTR(K__TD) = INTNOD('MAIN',NODE_IDS(K__TD))
F	   ENDDO
F	  ENDIF
F	  DO K__TD=1,27
F	    Q(NODE_PTR(K__TD)) = Q(NODE_PTR(K__TD)) + HEATLOADS(K__TD)
F	  ENDDO
F     END
