/* ******************************************************************** **
** @@ MW9070
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

/* ******************************************************************** **
**                uses pre-compiled headers
** ******************************************************************** */

#include "stdafx.h"

#include "..\shared\file.h"
#include "..\shared\file_find.h"
#include "..\shared\file_walker.h"
#include "..\shared\search_bmh.h"
#include "..\shared\mmf.h"

/* ******************************************************************** **
** @@                   internal #defines
** ******************************************************************** */

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#ifdef NDEBUG
#pragma optimize("gsy",on)
#pragma comment(linker,"/FILEALIGN:512 /MERGE:.rdata=.text /MERGE:.data=.text /SECTION:.text,EWR /IGNORE:4078")
#endif

/* ******************************************************************** **
** @@                   internal prototypes
** ******************************************************************** */

#pragma pack(push, 1)
struct MW9070_HEADER    // 306 bytes
{
   char        _pszSignature1[8];   // 0000
   char        _pszSignature2[4];   // 0008
   char        _pszSignature3[2];   // 000C
   char        _pszSignature4[10];  // 000E
   WORD        _w_0018;             // 0018
   WORD        _w_001A;             // 001A
   WORD        _w_001C;             // 001C
   WORD        _w_001E;             // 001E
   char        _pszText1[16];       // 0020
   char        _pszText2[16];       // 0030
   WORD        _w_0040;             // 0040
   WORD        _w_0042;             // 0042
   char        _pSignature5[10];    // 0044
   WORD        _w_004E;             // 004E
   WORD        _w_0050;             // 0050
   WORD        _wWaveLength;        // 0052
   WORD        _w_0054;             // 0054
   WORD        _w_0056;             // 0056
   WORD        _wPulseWidth;        // 0058
   WORD        _w_005A;             // 005A
   WORD        _w_005C;             // 005C
   DWORD       _dwRange;            // 005E
   DWORD       _dwIOR;              // 0062
   DWORD       _dwFactor1;          // 0066
   DWORD       _dwFactor2;          // 006A
   DWORD       _dwFactor3;          // 006E
   DWORD       _dwFactor4;          // 0072
   WORD        _w_0076;             // 0076
   WORD        _w_0078;             // 0078
   WORD        _w_007A;             // 007A  // 0 - LSA // Screen
   WORD        _w_007C;             // 007C  // 0 - LSA // Screen
   WORD        _w_007E;             // 007E
   WORD        _w_0080;             // 0080
   WORD        _w_0082;             // 0082
   WORD        _w_0084;             // 0084
   WORD        _w_0086;             // 0086
   WORD        _w_0088;             // 0088
   WORD        _w_008A;             // 008A
   WORD        _w_008C;             // 008C
   WORD        _w_008E;             // 008E
   WORD        _w_0090;             // 0090
   WORD        _w_0092;             // 0092
   WORD        _w_0094;             // 0094
   WORD        _w_0096;             // 0096
   WORD        _w_0098;             // 0098
   WORD        _w_009A;             // 009A
   WORD        _wDay;               // 009C
   WORD        _wMonth;             // 009E
   WORD        _wYear;              // 00A0
   WORD        _wHour;              // 00A2
   WORD        _wMinutes;           // 00A4
   WORD        _w_X2coord;          // 00A6
   WORD        _w_00A8;             // 00A8
   WORD        _w_Ycoord;           // 00AA
   WORD        _w_Y2coord;          // 00AC
   WORD        _w_Xcoord;           // 00AE
   WORD        _wTraceStart;        // 00B0
   WORD        _wRelLevel;          // 00B2
   WORD        _w_00B4;             // 00B4
   WORD        _w_00B6;             // 00B6
   WORD        _w_00B8;             // 00B8
   WORD        _wAvrgCounts;        // 00BA
   WORD        _w_00BC;             // 00BC
   WORD        _w_00BE;             // 00BE
   WORD        _w_00C0;             // 00C0
   WORD        _wPos_C2;            // 00C2
   WORD        _w_00C4;             // 00CA
   WORD        _wPos_C1;            // 00C6
   WORD        _w_00C8;             // 00C8
   WORD        _w_00CA;             // 00CA
   WORD        _w_00CC;             // 00CC
   WORD        _w_00CE;             // 00CE
   WORD        _w_00D0;             // 00D0
   WORD        _w_00D2;             // 00D2
   WORD        _w_00D4;             // 00D4
   WORD        _w_00D6;             // 00D6
   WORD        _w_00D8;             // 00D8
   WORD        _w_00DA;             // 00DA
   WORD        _w_00DC;             // 00DC
   WORD        _w_00DE;             // 00DE
   WORD        _w_00E0;             // 00E0
   WORD        _w_00E2;             // 00E2
   WORD        _w_00E4;             // 00E4
   WORD        _w_00E6;             // 00E6
   WORD        _w_00E8;             // 00E8
   WORD        _w_00EA;             // 00EA
   WORD        _w_00EC;             // 00EC
   WORD        _w_00EE;             // 00EE
   WORD        _w_00F0;             // 00F0
   WORD        _w_00F2;             // 00F2
   WORD        _w_00F4;             // 00F4
   WORD        _w_00F6;             // 00F6
   WORD        _w_EventCnt;         // 00F8
   WORD        _w_00FA;             // 00FA
   WORD        _w_00FC;             // 00FA
   WORD        _w_00FE;             // 00FE
   WORD        _w_0100;             // 0100
   WORD        _w_0102;             // 0102
   WORD        _w_0104;             // 0104
   WORD        _w_0106;             // 0106
   WORD        _w_0108;             // 0108
   WORD        _w_010A;             // 010A
   WORD        _w_010C;             // 010C
   WORD        _w_010E;             // 010E
   WORD        _w_0110;             // 0110
   WORD        _w_0112;             // 0112
   WORD        _w_0114;             // 0114
   WORD        _w_0116;             // 0116
   WORD        _w_0118;             // 0118
   WORD        _w_011A;             // 011A
   WORD        _w_011C;             // 011C
   WORD        _w_011E;             // 011E
   WORD        _w_0120;             // 0120
   WORD        _w_0122;             // 0122
   WORD        _w_0124;             // 0124
   WORD        _w_0126;             // 0126
   WORD        _w_0128;             // 0128
   WORD        _w_012A;             // 012A
   WORD        _w_012C;             // 012C
   WORD        _w_Strange;          // 012E
   WORD        _w_DataPts;          // 0130
};
#pragma pack(pop)

#pragma pack(push, 1)
struct MW9070_BLOCK8    // 16 bytes
{
   WORD        _w_U1;
   WORD        _w_U2;
   WORD        _w_U3;
   WORD        _w_U4;
   WORD        _w_U5;
   WORD        _w_U6;
   WORD        _w_U7;
   WORD        _w_U8;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct MW9070_EVENTS    // 30 bytes
{
   WORD        _w_PropagationTime;
   WORD        _w_Marker1_Shift;
   WORD        _w_Marker2_Shift;
   WORD        _w_Marker3_Shift;
   WORD        _w_Marker4_Shift;
   WORD        _w_Marker5_Shift;
   WORD        _w_U1;
   WORD        _w_EventNum;
   WORD        _w_U3;
   WORD        _w_U4;
   WORD        _w_U5;
   WORD        _w_U6;
   WORD        _w_DP_VertShift01;
   WORD        _w_DP_VertShift02;
   WORD        _w_DP_Count;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct MW9070_SCALE    // 12 bytes
{
   WORD        _w_DP_Scale1;
   WORD        _w_DP_Scale2;
   WORD        _w_DP_Scale3;
   WORD        _w_Unknown1;
   WORD        _w_Unknown2;
   WORD        _w_DP_Scale4;
};
#pragma pack(pop)

/* ******************************************************************** **
** @@                   external global variables
** ******************************************************************** */

extern DWORD      dwKeepError = 0;

/* ******************************************************************** **
** @@                   static global variables
** ******************************************************************** */

static MW9070_HEADER*      _pHeader = NULL;
static DWORD*              _pData   = NULL;
static MW9070_BLOCK8*      _pBlock8 = NULL;
static MW9070_EVENTS*      _pEvents = NULL;
static MW9070_SCALE*       _pScale  = NULL;

const int   EXT_SIG_SIZE = 16;

static char    _pExtSig[EXT_SIG_SIZE + 1] = "\x05\x00\x00\x00\x00\x00\x01\x00\x01\x00\x01\x00\x65\x58\x74\x00";

static FILE*   _pOut = NULL;

/* ******************************************************************** **
** @@                   real code
** ******************************************************************** */

static void PrintHeader(const char* const pszFName)
{
   char     pszText[MAX_PATH];
   char     pszName[MAX_PATH];

   sprintf(pszName,"%s.hdr.txt",pszFName);

   _pOut = fopen(pszName,"wt");

   fprintf(_pOut,"0000: Signature1:     [%s]\n",_pHeader->_pszSignature1);

   strncpy(pszText,_pHeader->_pszSignature2,4);
   pszText[4] = 0;  // Ensure ASCIIZ

   fprintf(_pOut,"0008: Signature2:     [%s]\n",pszText);

   strncpy(pszText,_pHeader->_pszSignature3,2);
   pszText[2] = 0;  // Ensure ASCIIZ

   fprintf(_pOut,"000C: Signature3:     [%s]\n",pszText);

   strncpy(pszText,_pHeader->_pszSignature4,10);
   pszText[10] = 0;  // Ensure ASCIIZ

   fprintf(_pOut,"000E: Signature4:     [%s]\n",pszText);

   fprintf(_pOut,"0018: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0018,_pHeader->_w_0018);
   fprintf(_pOut,"001A: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_001A,_pHeader->_w_001A);
   fprintf(_pOut,"001C: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_001C,_pHeader->_w_001C);
   fprintf(_pOut,"001E: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_001E,_pHeader->_w_001E);

   strncpy(pszText,_pHeader->_pszText1,16);
   pszText[16] = 0;  // Ensure ASCIIZ

   fprintf(_pOut,"0020: Text1:          [%s]\n",pszText);

   strncpy(pszText,_pHeader->_pszText2,16);
   pszText[16] = 0;  // Ensure ASCIIZ

   fprintf(_pOut,"0030: Text2:          [%s]\n",pszText);
   
   fprintf(_pOut,"0040: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0040,_pHeader->_w_0040);
   fprintf(_pOut,"0042: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0042,_pHeader->_w_0042);
   
   strncpy(pszText,_pHeader->_pSignature5,10);
   pszText[10] = 0;  // Ensure ASCIIZ

   fprintf(_pOut,"0044: Signature5:     [%s]\n",pszText);

   fprintf(_pOut,"004E: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_004E,_pHeader->_w_004E);
   fprintf(_pOut,"0050: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0050,_pHeader->_w_0050);
   fprintf(_pOut,"0052: WaveLength:     %04X  %5d\n",_pHeader->_wWaveLength,_pHeader->_wWaveLength);
   fprintf(_pOut,"0054: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0054,_pHeader->_w_0054);
   fprintf(_pOut,"0056: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0056,_pHeader->_w_0056);
   fprintf(_pOut,"0058: PulseWidth:     %04X  %5d\n",_pHeader->_wPulseWidth,_pHeader->_wPulseWidth);
   fprintf(_pOut,"005A: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_005A,_pHeader->_w_005A);
   fprintf(_pOut,"005C: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_005C,_pHeader->_w_005C);
   fprintf(_pOut,"005E: Acc.Range:      %08X  %12lu\n",_pHeader->_dwRange,_pHeader->_dwRange);
   fprintf(_pOut,"0062: IOR:            %08X  %12lu\n",_pHeader->_dwIOR,_pHeader->_dwIOR);
   fprintf(_pOut,"0066: Factor1:        %08X  %12lu\n",_pHeader->_dwFactor1,_pHeader->_dwFactor1);
   fprintf(_pOut,"006A: Factor2:        %08X  %12lu\n",_pHeader->_dwFactor2,_pHeader->_dwFactor2);
   fprintf(_pOut,"006E: Factor3:        %08X  %12lu\n",_pHeader->_dwFactor3,_pHeader->_dwFactor3);
   fprintf(_pOut,"0072: Factor4:        %08X  %12lu\n",_pHeader->_dwFactor4,_pHeader->_dwFactor4);
   fprintf(_pOut,"0076: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0076,_pHeader->_w_0076);
   fprintf(_pOut,"0078: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0078,_pHeader->_w_0078);
   fprintf(_pOut,"007A: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_007A,_pHeader->_w_007A);
   fprintf(_pOut,"007C: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_007C,_pHeader->_w_007C);
   fprintf(_pOut,"007E: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_007E,_pHeader->_w_007E);
   fprintf(_pOut,"0080: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0080,_pHeader->_w_0080);
   fprintf(_pOut,"0082: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0082,_pHeader->_w_0082);
   fprintf(_pOut,"0084: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0084,_pHeader->_w_0084);
   fprintf(_pOut,"0086: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0086,_pHeader->_w_0086);
   fprintf(_pOut,"0088: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0088,_pHeader->_w_0088);
   fprintf(_pOut,"008A: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_008A,_pHeader->_w_008A);
   fprintf(_pOut,"008C: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_008C,_pHeader->_w_008C);
   fprintf(_pOut,"008E: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_008E,_pHeader->_w_008E);
   fprintf(_pOut,"0090: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0090,_pHeader->_w_0090);
   fprintf(_pOut,"0092: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0092,_pHeader->_w_0092);
   fprintf(_pOut,"0094: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0094,_pHeader->_w_0094);
   fprintf(_pOut,"0096: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0096,_pHeader->_w_0096);
   fprintf(_pOut,"0098: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0098,_pHeader->_w_0098);
   fprintf(_pOut,"009A: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_009A,_pHeader->_w_009A);
   fprintf(_pOut,"009C: Day:            %04X  %5d\n",_pHeader->_wDay,_pHeader->_wDay);
   fprintf(_pOut,"009E: Month:          %04X  %5d\n",_pHeader->_wMonth,_pHeader->_wMonth);
   fprintf(_pOut,"00A0: Year:           %04X  %5d\n",_pHeader->_wYear,_pHeader->_wYear);
   fprintf(_pOut,"00A2: Hour:           %04X  %5d\n",_pHeader->_wHour,_pHeader->_wHour);
   fprintf(_pOut,"00A4: Minutes:        %04X  %5d\n",_pHeader->_wMinutes,_pHeader->_wMinutes);
   fprintf(_pOut,"00A6: X2coord:        %04X  %5d\n",_pHeader->_w_X2coord,_pHeader->_w_X2coord);
   fprintf(_pOut,"00A8: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00A8,_pHeader->_w_00A8);
   fprintf(_pOut,"00AA: Ycoord:         %04X  %5d\n",_pHeader->_w_Ycoord,_pHeader->_w_Ycoord);
   fprintf(_pOut,"00AC: Y2coord:        %04X  %5d\n",_pHeader->_w_Y2coord,_pHeader->_w_Y2coord);
   fprintf(_pOut,"00AE: Xcoord          %04X  %5d\n",_pHeader->_w_Xcoord,_pHeader->_w_Xcoord);
   fprintf(_pOut,"00B0: TraceStart:     %04X  %5d\n",_pHeader->_wTraceStart,_pHeader->_wTraceStart);
   fprintf(_pOut,"00B2: RelLevel:       %04X  %5d\n",_pHeader->_wRelLevel,_pHeader->_wRelLevel);
   fprintf(_pOut,"00B4: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00B4,_pHeader->_w_00B4);
   fprintf(_pOut,"00B6: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00B6,_pHeader->_w_00B6);
   fprintf(_pOut,"00B8: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00B8,_pHeader->_w_00B8);
   fprintf(_pOut,"00BA: AvrgCounts:     %04X  %5d\n",_pHeader->_wAvrgCounts,_pHeader->_wAvrgCounts);
   fprintf(_pOut,"00BC: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00BC,_pHeader->_w_00BC);
   fprintf(_pOut,"00BE: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00BE,_pHeader->_w_00BE);
   fprintf(_pOut,"00C0: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00C0,_pHeader->_w_00C0);
   fprintf(_pOut,"00C2: Pos_C2:         %04X  %5d\n",_pHeader->_wPos_C2,_pHeader->_wPos_C2);
   fprintf(_pOut,"00C4: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00C4,_pHeader->_w_00C4);
   fprintf(_pOut,"00C6: Pos_C1:         %04X  %5d\n",_pHeader->_wPos_C1,_pHeader->_wPos_C1);
   fprintf(_pOut,"00C8: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00C8,_pHeader->_w_00C8);
   fprintf(_pOut,"00CA: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00CA,_pHeader->_w_00CA);
   fprintf(_pOut,"00CC: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00CC,_pHeader->_w_00CC);
   fprintf(_pOut,"00CE: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00CE,_pHeader->_w_00CE);
   fprintf(_pOut,"00D0: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00D0,_pHeader->_w_00D0);
   fprintf(_pOut,"00D2: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00D2,_pHeader->_w_00D2);
   fprintf(_pOut,"00D4: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00D4,_pHeader->_w_00D4);
   fprintf(_pOut,"00D6: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00D6,_pHeader->_w_00D6);
   fprintf(_pOut,"00D8: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00D8,_pHeader->_w_00D8);
   fprintf(_pOut,"00DA: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00DA,_pHeader->_w_00DA);
   fprintf(_pOut,"00DC: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00DC,_pHeader->_w_00DC);
   fprintf(_pOut,"00DE: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00DE,_pHeader->_w_00DE);
   fprintf(_pOut,"00E0: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00E0,_pHeader->_w_00E0);
   fprintf(_pOut,"00E2: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00E2,_pHeader->_w_00E2);
   fprintf(_pOut,"00E4: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00E4,_pHeader->_w_00E4);
   fprintf(_pOut,"00E6: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00E6,_pHeader->_w_00E6);
   fprintf(_pOut,"00E8: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00E8,_pHeader->_w_00E8);
   fprintf(_pOut,"00EA: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00EA,_pHeader->_w_00EA);
   fprintf(_pOut,"00EC: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00EC,_pHeader->_w_00EC);
   fprintf(_pOut,"00EE: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00EE,_pHeader->_w_00EE);
   fprintf(_pOut,"00F0: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00F0,_pHeader->_w_00F0);
   fprintf(_pOut,"00F2: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00F2,_pHeader->_w_00F2);
   fprintf(_pOut,"00F4: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00F4,_pHeader->_w_00F4);
   fprintf(_pOut,"00F6: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00F6,_pHeader->_w_00F6);
   fprintf(_pOut,"00F8: EventCnt:       %04X  %5d\n",_pHeader->_w_EventCnt,_pHeader->_w_EventCnt);
   fprintf(_pOut,"00FA: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00FA,_pHeader->_w_00FA);
   fprintf(_pOut,"00FC: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00FC,_pHeader->_w_00FC);
   fprintf(_pOut,"00FE: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_00FE,_pHeader->_w_00FE);
   fprintf(_pOut,"0100: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0100,_pHeader->_w_0100);
   fprintf(_pOut,"0102: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0102,_pHeader->_w_0102);
   fprintf(_pOut,"0104: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0104,_pHeader->_w_0104);
   fprintf(_pOut,"0106: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0106,_pHeader->_w_0106);
   fprintf(_pOut,"0108: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0108,_pHeader->_w_0108);
   fprintf(_pOut,"010A: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_010A,_pHeader->_w_010A);
   fprintf(_pOut,"010C: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_010C,_pHeader->_w_010C);
   fprintf(_pOut,"010E: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_010E,_pHeader->_w_010E);
   fprintf(_pOut,"0100: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0100,_pHeader->_w_0100);
   fprintf(_pOut,"0112: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0112,_pHeader->_w_0112);
   fprintf(_pOut,"0114: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0114,_pHeader->_w_0114);
   fprintf(_pOut,"0116: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0116,_pHeader->_w_0116);
   fprintf(_pOut,"0118: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0118,_pHeader->_w_0118);
   fprintf(_pOut,"011A: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_011A,_pHeader->_w_011A);
   fprintf(_pOut,"011C: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_011C,_pHeader->_w_011C);
   fprintf(_pOut,"011E: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_011E,_pHeader->_w_011E);
   fprintf(_pOut,"0120: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0120,_pHeader->_w_0120);
   fprintf(_pOut,"0122: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0122,_pHeader->_w_0122);
   fprintf(_pOut,"0124: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0124,_pHeader->_w_0124);
   fprintf(_pOut,"0126: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0126,_pHeader->_w_0126);
   fprintf(_pOut,"0128: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_0128,_pHeader->_w_0128);
   fprintf(_pOut,"012A: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_012A,_pHeader->_w_012A);
   fprintf(_pOut,"012C: UNKNOWN!!       %04X  %5d\n",_pHeader->_w_012C,_pHeader->_w_012C);
   fprintf(_pOut,"012E: Strange:        %04X  %5d\n",_pHeader->_w_Strange,_pHeader->_w_Strange);
   fprintf(_pOut,"0130: DataPts         %04X  %5d\n",_pHeader->_w_DataPts,_pHeader->_w_DataPts);

   fclose(_pOut);
   _pOut = NULL;
}

/* ******************************************************************** **
** @@ PrintData()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

static void PrintData(const char* const pszFName,DWORD dwStart,DWORD dwCnt)
{
   char     pszName[MAX_PATH];

   sprintf(pszName,"%s.data.txt",pszFName);

   _pOut = fopen(pszName,"wt");

   for (DWORD ii = 0; ii < dwCnt; ++ii)
   {
      DWORD    dwValue = *(DWORD*)(_pData + ii);

      fprintf(_pOut,"%04X:  %08X  %12lu\n",dwStart,dwValue,dwValue);
      dwStart += sizeof(DWORD);
   }

   fclose(_pOut);
   _pOut = NULL;
}

/* ******************************************************************** **
** @@ PrintBlock8()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

static void PrintBlock8(const char* const pszFName,DWORD dwStart)
{
   char     pszName[MAX_PATH];

   sprintf(pszName,"%s.blk8.txt",pszFName);

   _pOut = fopen(pszName,"wt");

   fprintf(_pOut,"%04X: U1 %04X  %5d\n",dwStart,_pBlock8->_w_U1,_pBlock8->_w_U1);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: U2 %04X  %5d\n",dwStart,_pBlock8->_w_U2,_pBlock8->_w_U2);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: U3 %04X  %5d\n",dwStart,_pBlock8->_w_U3,_pBlock8->_w_U3);
   dwStart += sizeof(WORD);                                                            
                                                                                       
   fprintf(_pOut,"%04X: U4 %04X  %5d\n",dwStart,_pBlock8->_w_U4,_pBlock8->_w_U4);
   dwStart += sizeof(WORD);                                                            
                                                                                       
   fprintf(_pOut,"%04X: U5 %04X  %5d\n",dwStart,_pBlock8->_w_U5,_pBlock8->_w_U5);
   dwStart += sizeof(WORD);                                                            
                                                                                       
   fprintf(_pOut,"%04X: U6 %04X  %5d\n",dwStart,_pBlock8->_w_U6,_pBlock8->_w_U6);
   dwStart += sizeof(WORD);                                                            
                                                                                       
   fprintf(_pOut,"%04X: U7 %04X  %5d\n",dwStart,_pBlock8->_w_U7,_pBlock8->_w_U7);
   dwStart += sizeof(WORD);                                                            
                                                                                       
   fprintf(_pOut,"%04X: U8 %04X  %5d\n",dwStart,_pBlock8->_w_U8,_pBlock8->_w_U8);
   dwStart += sizeof(WORD);

   fclose(_pOut);
   _pOut = NULL;
}

/* ******************************************************************** **
** @@ PrintEvent()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

static void PrintEvent(const char* const pszFName,DWORD dwStart,int iNum)
{
   char     pszName[MAX_PATH];

   sprintf(pszName,"%s.evt_%02d.txt",pszFName,iNum);

   _pOut = fopen(pszName,"wt");

   fprintf(_pOut,"%04X: PropagationTime %04X  %5d\n",dwStart,_pEvents->_w_PropagationTime,_pEvents->_w_PropagationTime);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: Marker1_Shift   %04X  %5d\n",dwStart,_pEvents->_w_Marker1_Shift,_pEvents->_w_Marker1_Shift);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: Marker2_Shift   %04X  %5d\n",dwStart,_pEvents->_w_Marker2_Shift,_pEvents->_w_Marker2_Shift);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: Marker3_Shift   %04X  %5d\n",dwStart,_pEvents->_w_Marker3_Shift,_pEvents->_w_Marker3_Shift);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: Marker4_Shift   %04X  %5d\n",dwStart,_pEvents->_w_Marker4_Shift,_pEvents->_w_Marker4_Shift);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: Marker5_Shift   %04X  %5d\n",dwStart,_pEvents->_w_Marker5_Shift,_pEvents->_w_Marker5_Shift);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: UNKNOWN 1       %04X  %5d\n",dwStart,_pEvents->_w_U1,_pEvents->_w_U1);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: EventNum        %04X  %5d\n",dwStart,_pEvents->_w_EventNum,_pEvents->_w_EventNum);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: UNKNOWN 3       %04X  %5d\n",dwStart,_pEvents->_w_U3,_pEvents->_w_U3);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: UNKNOWN 4       %04X  %5d\n",dwStart,_pEvents->_w_U4,_pEvents->_w_U4);
   dwStart += sizeof(WORD);                                 

   fprintf(_pOut,"%04X: UNKNOWN 5       %04X  %5d\n",dwStart,_pEvents->_w_U5,_pEvents->_w_U5);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: UNKNOWN 6       %04X  %5d\n",dwStart,_pEvents->_w_U6,_pEvents->_w_U6);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: DP_VertShift01  %04X  %5d\n",dwStart,_pEvents->_w_DP_VertShift01,_pEvents->_w_DP_VertShift01);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: DP_VertShift02  %04X  %5d\n",dwStart,_pEvents->_w_DP_VertShift02,_pEvents->_w_DP_VertShift02);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: DP_Count        %04X  %5d\n",dwStart,_pEvents->_w_DP_Count,_pEvents->_w_DP_Count);
   dwStart += sizeof(WORD);

   fclose(_pOut);
   _pOut = NULL;
}

/* ******************************************************************** **
** @@ PrintScale()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

static void PrintScale(const char* const pszFName,DWORD dwStart)
{
   char     pszName[MAX_PATH];

   sprintf(pszName,"%s.scale.txt",pszFName);

   _pOut = fopen(pszName,"wt");

   fprintf(_pOut,"%04X: DP_Scale1   %04X  %5d\n",dwStart,_pScale->_w_DP_Scale1,_pScale->_w_DP_Scale1);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: DP_Scale2   %04X  %5d\n",dwStart,_pScale->_w_DP_Scale2,_pScale->_w_DP_Scale2);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: DP_Scale3   %04X  %5d\n",dwStart,_pScale->_w_DP_Scale3,_pScale->_w_DP_Scale3);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: UNKNOWN1    %04X  %5d\n",dwStart,_pScale->_w_Unknown1,_pScale->_w_Unknown1);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: UNKNOWN2    %04X  %5d\n",dwStart,_pScale->_w_Unknown2,_pScale->_w_Unknown2);
   dwStart += sizeof(WORD);

   fprintf(_pOut,"%04X: DP_Scale4   %04X  %5d\n",dwStart,_pScale->_w_DP_Scale4,_pScale->_w_DP_Scale4);
   dwStart += sizeof(WORD);

   fclose(_pOut);
   _pOut = NULL;
}

/* ******************************************************************** **
** @@ ForEach()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

static void ForEach(const char* const pszFilename)
{
   char     pszData [_MAX_PATH];
   char     pszT64  [_MAX_PATH];
   char     pszBlk8 [_MAX_PATH];
   char     pszEvt  [_MAX_PATH];
   char     pszRest [_MAX_PATH];
   char     pszDrive[_MAX_DRIVE];
   char     pszDir  [_MAX_DIR];
   char     pszFName[_MAX_FNAME];
   char     pszExt  [_MAX_EXT];

   _splitpath(pszFilename,pszDrive,pszDir,pszFName,pszExt);

   char     pszVictim[MAX_PATH + 1];

   // Construct Naked Filename
   strcpy(pszVictim,pszFName);
   strcat(pszVictim,pszExt);

   MMF*     pMF = new MMF;

   if (!pMF->OpenReadOnly(pszVictim))
   {
      // Error !
      printf("\nErr: Can't open for RO. [%s]\n",pszVictim);
      return;
   }

   // Do Actual Work
   BYTE*    pBuf   = pMF->Buffer();
   DWORD    dwSize = pMF->Size();

   // Header
   _pHeader = (MW9070_HEADER*)pBuf;

   _makepath(pszData,pszDrive,pszDir,pszFName,".hdr");

   HANDLE      hFile = CreateFile(pszData);

   if (hFile == INVALID_HANDLE_VALUE)
   {
      // Error !
      ASSERT(0);
      return;
   }

   WriteBuffer(hFile,_pHeader,sizeof(MW9070_HEADER));

   PrintHeader(pszFName);

   CloseHandle(hFile);
   hFile = INVALID_HANDLE_VALUE;

   // Dump DataPoints
   _makepath(pszData,pszDrive,pszDir,pszFName,".data");

   hFile = CreateFile(pszData);

   if (hFile == INVALID_HANDLE_VALUE)
   {
      // Error !
      ASSERT(0);
      return;
   }

   DWORD    dwStart = sizeof(MW9070_HEADER);

   DWORD    dwDataSize = _pHeader->_w_DataPts * sizeof(DWORD);

   WriteBuffer(hFile,pBuf + dwStart,dwDataSize);

   _pData = (DWORD*)(pBuf + dwStart);

   PrintData(pszFName,dwStart,_pHeader->_w_DataPts);

   CloseHandle(hFile);
   hFile = INVALID_HANDLE_VALUE;

   // Dump Table1 // 256 bytes
   _makepath(pszT64,pszDrive,pszDir,pszFName,".tab1");

   hFile = CreateFile(pszT64);

   if (hFile == INVALID_HANDLE_VALUE)
   {
      // Error !
      ASSERT(0);
      return;
   }

   dwStart = sizeof(MW9070_HEADER) + dwDataSize;

   DWORD    dwTable1 = sizeof(DWORD) * 64;

   WriteBuffer(hFile,pBuf + dwStart,dwTable1);

   CloseHandle(hFile);
   hFile = INVALID_HANDLE_VALUE;

   // Block8
   dwStart = sizeof(MW9070_HEADER) + dwDataSize + dwTable1;

   _pBlock8 = (MW9070_BLOCK8*)(pBuf + dwStart);

   _makepath(pszBlk8,pszDrive,pszDir,pszFName,".blk8");

   hFile = CreateFile(pszBlk8);

   if (hFile == INVALID_HANDLE_VALUE)
   {
      // Error !
      ASSERT(0);
      return;
   }

   WriteBuffer(hFile,_pBlock8,sizeof(MW9070_BLOCK8));

   PrintBlock8(pszFName,dwStart);

   CloseHandle(hFile);
   hFile = INVALID_HANDLE_VALUE;

   // Events
   for (int ii = 0; ii < _pHeader->_w_EventCnt; ++ii)
   {
      char     pszExt[MAX_PATH];

      sprintf(pszExt,".evt_%02d",ii + 1);

      _makepath(pszEvt,pszDrive,pszDir,pszFName,pszExt);

      hFile = CreateFile(pszEvt);

      if (hFile == INVALID_HANDLE_VALUE)
      {
         // Error !
         ASSERT(0);
         return;
      }

      dwStart = sizeof(MW9070_HEADER) + dwDataSize + dwTable1 + sizeof(MW9070_BLOCK8) + ii * sizeof(MW9070_EVENTS);

      _pEvents = (MW9070_EVENTS*)(pBuf + dwStart);

      WriteBuffer(hFile,_pEvents,sizeof(MW9070_EVENTS));

      PrintEvent(pszFName,dwStart,ii);

      CloseHandle(hFile);
      hFile = INVALID_HANDLE_VALUE;
   }

   // Window
   _makepath(pszEvt,pszDrive,pszDir,pszFName,".scl");

   hFile = CreateFile(pszEvt);

   if (hFile == INVALID_HANDLE_VALUE)
   {
      // Error !
      ASSERT(0);
      return;
   }

   dwStart = sizeof(MW9070_HEADER) + dwDataSize + dwTable1 + sizeof(MW9070_BLOCK8) + sizeof(MW9070_EVENTS) * _pHeader->_w_EventCnt;

   _pScale = (MW9070_SCALE*)(pBuf + dwStart);

   WriteBuffer(hFile,_pScale,sizeof(MW9070_SCALE));

   PrintScale(pszFName,dwStart);

   CloseHandle(hFile);
   hFile = INVALID_HANDLE_VALUE;

   // Dump Rest
   _makepath(pszRest,pszDrive,pszDir,pszFName,".rest");

   hFile = CreateFile(pszRest);

   if (hFile == INVALID_HANDLE_VALUE)
   {
      // Error !
      ASSERT(0);
      return;
   }

   dwStart = sizeof(MW9070_HEADER) + dwDataSize + dwTable1 + sizeof(MW9070_BLOCK8) + sizeof(MW9070_EVENTS) * _pHeader->_w_EventCnt + sizeof(MW9070_SCALE);

   DWORD    dwRest = dwSize - dwStart;

   WriteBuffer(hFile,pBuf + dwStart,dwRest);

   CloseHandle(hFile);
   hFile = INVALID_HANDLE_VALUE;

   // Cleanup
   pMF->Close();

   delete pMF;
   pMF = NULL;
}

/* ******************************************************************** **
** @@ ShowHelp()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

void ShowHelp()
{
   const char pszCopyright[] = "-*-   MW9070  *   Copyright (c) Gazlan, 2015   -*-";
   const char pszDescript [] = "MW9070";
   const char pszE_Mail   [] = "complains_n_suggestions direct to gazlan@yandex.ru";

   printf("%s\n\n",pszCopyright);
   printf("%s\n\n",pszDescript);
   printf("Usage: MW9070.com wildcards\n\n");
   printf("%s\n",pszE_Mail);
}

/* ******************************************************************** **
** @@ main()
** @  Copyrt :
** @  Author :
** @  Modify :
** @  Update :
** @  Notes  :
** ******************************************************************** */

int main(int argc,char** argv)
{
   if (argc < 2)
   {
      ShowHelp();
      return 0;
   }

   if (argc == 2 && ((!strcmp(argv[1],"?")) || (!strcmp(argv[1],"/?")) || (!strcmp(argv[1],"-?")) || (!stricmp(argv[1],"/h")) || (!stricmp(argv[1],"-h"))))
   {
      ShowHelp();
      return 0;
   }

   char     pszMask[MAX_PATH + 1];

   memset(pszMask,0,sizeof(pszMask));

   strncpy(pszMask,argv[1],MAX_PATH);
   pszMask[MAX_PATH] = 0; // Ensure ASCIIZ

   Walker      Visitor;

   Visitor.Init(ForEach,pszMask,false);
   Visitor.Run(".");

   return 0;
}

/* ******************************************************************** **
**                That's All
** ******************************************************************** */
