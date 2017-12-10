#include "windows.h"
#include "stdio.h"
#include "wt_de.h"
#include "project.h"
#include "func.h"
#pragma comment(lib,"wt_de.lib")
#pragma comment(lib,"user32.lib") 
#define count 256
#define ini "C:\\project\\qcrypto.ini"
#define info "C:\\project\\info.ini"

HWND hWndInfoClass;//переменна€ окнa

char prt27[512];
char prt10[260];
char prt30[260];
char *qcrypto_ini = ini;
int primary_lang_id2=0x19;//{'\19','\0','\0','\0'};
int dialect_id2=1;

char v10[260];
int unk_B029DC = 0;
long dword_B80524 = 0;
void* dword_B029E8;
//int p11 = 1;
int p1 = 1;
//byte t = (byte)&m1;
static mParam marr[456] = {
  {m1, 1, 2},
  {m2, 1, 3},
  {m3, 1, 4},
	{m4, 1, 6},
	{m5, 1, 5},
  {m5, 1, 7},
  {m5, 2, 8},
  {m5, 2, 9},
  {m5, 2, 10},
  {m5, 2, 11},
  {m5, 3, 12},
  {m5, 4, 13},
  {m5, 4, 14},
  {m5, 5, 15},
  {m5, 5, 0x10},
  {m5, 5, 0x11},
  {m5, 6, 0x12},
  {m5, 6, 0x13},
  {m5, 6, 0x14},
  {m5, 6, 0x15},
  {m5, 6, 0x16},
  {m5, 6, 0x17},
  {m5, 6, 0x18},
  {m5, 6, 0x19},
  {m5, 6, 0x1A},
  {m5, 7, 0x1B},
  {m5, 8, 0x1C},
  {m5, 8, 0x1D},
  {m5, 9, 0x1E},
  {m5, 9, 0x1F},
  {m5, 9, 0x20},
  {m5, 0xA, 0x21},
  {m5, 0xB, 0x22},
  {m5, 0xB, 0x22},
  {m5, 0xB, 0x23},
  {m5, 0xC, 0x24},
  {m5, 0xC, 0x25},
  {m5, 0xC, 0x26},
  {m5, 0xC, 0x27},
  {m5, 0xC, 0x28},
  {m5, 0xC, 0x29},
  {m5, 0xD, 0x2A},
  {m5, 0xD, 0x2B},
  {m5, 0xE, 0x2C},
  {m5, 0xE, 0x2D},
  {m5, 0xF, 0x2E},
  {m5, 0xF, 0x2F},
  {m5, 0x10, 0x30},
  {m5, 0x10, 0x31},
  {m5, 0x10, 0x32},
  {m5, 0x10, 0x33},
  {m5, 0x10, 0x34},
  {m5, 0x10, 0x35},
  {m5, 0x10, 0x36},
  {m5, 0x10, 0x37},
  {m5, 0x11, 0x38},
  {m5, 0x12, 0x43},
  {m5, 0x15, 0x46},
  {m5, 0x15, 0x4C},
  {m5, 0x15, 0x39},
  {m5, 0x13, 0x3A},
  {m5, 0x13, 0x3B},
  {m5, 0x13, 0x3C},
  {m5, 0x13, 0x3D},
  {m5, 0x13, 0x44},
  {m5, 0x14, 0x3E},
  {m5, 0x13, 0x42},
  {m5, 0x15, 0x45},
  {m5, 0x15, 0x3F},
  {m5, 0x13, 0x40},
  {m5, 0x15, 0x41},
  {m5, 0x15, 0x47},
  {m5, 0x15, 0x48},
  {m5, 0x15, 0x49},
  {m5, 0x15, 0x4A},
  {m5, 0x15, 0x4B},
  {m5, 0x15, 0x4D},
  {m5, 0x16, 0x4E},
  {m5, 0x16, 0x4F},
  {m5, 0x17, 0x50},
  {m5, 0x17, 0x52},
  {m5, 0x17, 0x51},
  {m5, 0x17, 0x53},
  {m5, 0x17, 0x54},
  {m5, 0x17, 0x56},
  {m5, 0x17, 0x55},
  {m5, 0x17, 0x57},
  {m5, 0x18, 0x58},
  {m5, 0x18, 0x59},
  {m5, 0x18, 0x5A},
  {m5, 0x18, 0x5B},
  {m5, 0x19, 0x5C},
  {m5, 0x19, 0x5D},
  {m5, 0x19, 0x5E},
  {m5, 0x19, 0x5F},
  {m5, 0x19, 0x60},
  {m5, 0x19, 0x61},
  {m5, 0x19, 0x62},
  {m5, 0x19, 0x63},
  {m5, 0x19, 0x64},
  {m5, 0x19, 0x65},
  {m5, 0x19, 0x66},
  {m5, 0x19, 0x67},
  {m5, 0x19, 0x68},
  {m5, 0x19, 0x69},
  {m5, 0x19, 0x6A},
  {m5, 0x19, 0x6B},
  {m5, 0x19, 0x6C},
  {m5, 0x1A, 0x6D},
  {m5, 0x1B, 0x6E},
  {m5, 0x1B, 0x6F},
  {m5, 0x1C, 0x70},
  {m5, 0x1C, 0x71},
  {m5, 0x1C, 0x72},
  {m5, 0x1D, 0x73},
  {m5, 0x1D, 0x74},
  {m5, 0x1E, 0x75},
  {m5, 0x1E, 0x76},
  {m5, 0x1E, 0x77},
  {m5, 0x1F, 0x78},
  {m5, 0x20, 0x79},
  {m5, 0x21, 0x7A},
  {m5, 0x21, 0x7B},
  {m5, 0x21, 0x7C},
  {m5, 0x21, 0x7D},
  {m5, 0x22, 0x7E},
  {m5, 0x22, 0x7F},
  {m5, 0x22, 0x80},
  {m5, 0x22, 0x81},
  {m5, 0x22, 0x82},
  {m5, 0x22, 0x83},
  {m5, 0x22, 0x84},
  {m5, 0x22, 0x85},
  {m5, 0x23, 0x86},
  {m5, 0x24, 0x87},
  {m5, 0x25, 0x89},
  {m5, 0x25, 0x88},
  {m5, 0x25, 0x8A},
  {m5, 0x25, 0x8B},
  {m5, 0x25, 0x8C},
  {m5, 0x26, 0x8D},
  {m5, 0x26, 0x8E},
  {m5, 0x26, 0x8F},
  {m5, 0x27, 0x90},
  {m5, 0x27, 0x91},
  {m5, 0x27, 0x92},
  {m5, 0x28, 0x93},
  {m5, 0x28, 0x94},
  {m5, 0x28, 0x95},
  {m5, 0x28, 0x96},
  {m5, 0x28, 0x97},
  {m5, 0x28, 0x98},
  {m5, 0x28, 0x99},
  {m5, 0x29, 0x9A},
  {m5, 0x29, 0x9B},
  {m5, 0x29, 0x9C},
  {m5, 0x2A, 0x9D},
  {m5, 0x2A, 0x9E},
  {m5, 0x2A, 0xA0},
  {m5, 0x2B, 0x9F},
  {m5, 0x2B, 0xA1},
  {m5, 0x2B, 0xA2},
  {m5, 0x2B, 0xA3},
  {m5, 0x2B, 0xA4},
  {m5, 0x2B, 0xA5},
  {m5, 0x2C, 0xA6},
  {m5, 0x2D, 0xA7},
  {m5, 0x2D, 0xA8},
  {m5, 0x2D, 0xAF},
  {m5, 0x2E, 0xB0},
  {m5, 0x2E, 0xB1},
  {m5, 0x2E, 0xB2},
  {m5, 0x2E, 0xB3},
  {m5, 0x2E, 0xB4},
  {m5, 0x2E, 0xA9},
  {m5, 0x2E, 0xAA},
  {m5, 0x2E, 0xAB},
  {m5, 0x2E, 0xAD},
  {m5, 0x2E, 0xAC},
  {m5, 0x2E, 0xAE},
  {m5, 0x2E, 0xB5},
  {m5, 0x2E, 0xB6},
  {m5, 0x2E, 0xB7},
  {m5, 0x2F, 0xB8},
  {m5, 0x2F, 0xB9},
  {m5, 0x2F, 0xBA},
  {m5, 0x2F, 0xBB},
  {m5, 0x2F, 0xBC},
  {m5, 0x2F, 0xBD},
  {m5, 0x2F, 0xBE},
  {m5, 0x2F, 0xBF},
  {m5, 0x30, 0xC0},
  {m5, 0x30, 0xC1},
  {m5, 0x30, 0xC2},
  {m5, 0x30, 0xC3},
  {m5, 0x30, 0xC4},
  {m5, 0x30, 0xC5},
  {m5, 0x30, 0xC6},
  {m5, 0x30, 0xC7},
  {m5, 0x30, 0xC8},
  {m5, 0x31, 0xC9},
  {m5, 0x31, 0xCA},
  {m5, 0x31, 0xCB},
  {m5, 0x31, 0xCC},
  {m5, 0x31, 0xCD},
  {m5, 0x31, 0xCE},
  {m5, 0x31, 0xCF},
  {m5, 0x31, 0xD3},
  {m5, 0x31, 0xD4},
  {m5, 0x31, 0xD1},
  {m5, 0x31, 0xD2},
  {m5, 0x31, 0xDB},
  {m5, 0x31, 0xD5},
  {m5, 0x31, 0xD6},
  {m5, 0x31, 0xD7},
  {m5, 0x31, 0xD8},
  {m5, 0x31, 0xD9},
  {m5, 0x31, 0xDA},
  {m5, 0x31, 0xDC},
  {m5, 0x32, 0xE2},
  {m5, 0x32, 0xDD},
  {m5, 0x32, 0xDE},
  {m5, 0x32, 0xDF},
  {m5, 0x32, 0xE9},
  {m5, 0x32, 0xE0},
  {m5, 0x32, 0xE1},
  {m5, 0x32, 0xE3},
  {m5, 0x32, 0xE4},
  {m5, 0x32, 0xE5},
  {m5, 0x32, 0xE6},
  {m5, 0x32, 0xE7},
  {m5, 0x32, 0xE8},
  {m5, 0x32, 0xEA},
  {m5, 0x32, 0xEB},
  {m5, 0x32, 0xEC},
  {m5, 0x32, 0xED},
  {m5, 0x33, 0xEE},
  {m5, 0x34, 0xEF},
  {m5, 0x34, 0xF0},
  {m5, 0x34, 0xF1},
  {m5, 0x34, 0xF2},
  {m5, 0x34, 0xF3},
  {m5, 0x35, 0xF4},
  {m5, 0x35, 0xF6},
  {m5, 0x35, 0xF5},
  {m5, 0x35, 0xF7},
  {m5, 0x35, 0xF8},
  {m5, 0x35, 0xF9},
  {m5, 0x35, 0xFA},
  {m5, 0x35, 0xFB},
  {m5, 0x36, 0xFD},
  {m5, 0x36, 0xFC},
  {m5, 0x36, 0xFE},
  {m5, 0x36, 0xFF},
  {m5, 0x36, 0x8001},
  {m5, 0x36, 0x8002},
  {m5, 0x36, 0x8003},
  {m5, 0x37, 0x8004},
  {m5, 0x37, 0x8005},
  {m5, 0x37, 0x8006},
  {m5, 0x37, 0x8007},
  {m5, 0x37, 0x8008},
  {m5, 0x37, 0x800A},
  {m5, 0x37, 0x800B},
  {m5, 0x38, 0x800C},
  {m5, 0x38, 0x800D},
  {m5, 0x38, 0x800E},
  {m5, 0x38, 0x800F},
  {m5, 0x38, 0x8010},
  {m5, 0x38, 0x8011},
  {m5, 0x38, 0x8012},
  {m5, 0x38, 0x8013},
  {m5, 0x38, 0x8014},
  {m5, 0x38, 0x8015},
  {m5, 0x38, 0x8016},
  {m5, 0x39, 0x8017},
  {m5, 0x39, 0x8018},
  {m5, 0x39, 0x801F},
  {m5, 0x3A, 0x8019},
  {m5, 0x3A, 0x801B},
  {m5, 0x3A, 0x801C},
  {m5, 0x3A, 0x802A},
  {m5, 0x3A, 0x8029},
  {m5, 0x3A, 0x801D},
  {m5, 0x3A, 0x801E},
  {m5, 0x3A, 0x8020},
  {m5, 0x3A, 0x8021},
  {m5, 0x3A, 0x8022},
  {m5, 0x3A, 0x8023},
  {m5, 0x3A, 0x8024},
  {m5, 0x3A, 0x8025},
  {m5, 0x3A, 0x8026},
  {m5, 0x3A, 0x8027},
  {m5, 0x3A, 0x8028},
  {m5, 0x3A, 0x802B},
  {m5, 0x3B, 0x8063},
  {m5, 0x3B, 0x802C},
  {m5, 0x3B, 0x8064},
  {m5, 0x3B, 0x802D},
  {m5, 0x3B, 0x802E},
  {m5, 0x3B, 0x802F},
  {m5, 0x3B, 0x8030},
  {m5, 0x3B, 0x8031},
  {m5, 0x3B, 0x8032},
  {m5, 0x3B, 0x8033},
  {m5, 0x3B, 0x8034},
  {m5, 0x3B, 0x8062},
  {m5, 0x3B, 0x8035},
  {m5, 0x3B, 0x8036},
  {m5, 0x3B, 0x8037},
  {m5, 0x3B, 0x8038},
  {m5, 0x3B, 0x8039},
  {m5, 0x3B, 0x803A},
  {m5, 0x3B, 0x803B},
  {m5, 0x3B, 0x803C},
  {m5, 0x3B, 0x803D},
  {m5, 0x3B, 0x803E},
  {m5, 0x3B, 0x803F},
  {m5, 0x3B, 0x8040},
  {m5, 0x3B, 0x8041},
  {m5, 0x3B, 0x8042},
  {m5, 0x3B, 0x8043},
  {m5, 0x3B, 0x8044},
  {m5, 0x3B, 0x8045},
  {m5, 0x3B, 0x8046},
  {m5, 0x3B, 0x8047},
  {m5, 0x3B, 0x8048},
  {m5, 0x3B, 0x8049},
  {m5, 0x3B, 0x804A},
  {m5, 0x3B, 0x804B},
  {m5, 0x3B, 0x804C},
  {m5, 0x3B, 0x804D},
  {m5, 0x3B, 0x804E},
  {m5, 0x3B, 0x8050},
  {m5, 0x3B, 0x8051},
  {m5, 0x3B, 0x8052},
  {m5, 0x3B, 0x8053},
  {m5, 0x3B, 0x8054},
  {m5, 0x3B, 0x804F},
  {m5, 0x3B, 0x8055},
  {m5, 0x3B, 0x8056},
  {m5, 0x3B, 0x8057},
  {m5, 0x3B, 0x8058},
  {m5, 0x3B, 0x8059},
  {m5, 0x3B, 0x805A},
  {m5, 0x3B, 0x805B},
  {m5, 0x3B, 0x805C},
  {m5, 0x3B, 0x805D},
  {m5, 0x3B, 0x805E},
  {m5, 0x3B, 0x805F},
  {m5, 0x3B, 0x8060},
  {m5, 0x3B, 0x8061},
  {m5, 0x3B, 0x8066},
  {m5, 0x3B, 0x8067},
  {m5, 0x3B, 0x8068},
  {m5, 0x3B, 0x8069},
  {m5, 0x3B, 0x806A},
  {m5, 0x3B, 0x806B},
  {m5, 0x3B, 0x806C},
  {m5, 0x3B, 0x806D},
  {m5, 0x3B, 0x806E},
  {m5, 0x3C, 0x806F},
  {m5, 0x3C, 0x8072},
  {m5, 0x3D, 0x8073},
  {m5, 0x3D, 0x8070},
  {m5, 0x3D, 0x8071},
  {m5, 0x3D, 0x8074},
  {m5, 0x3D, 0x8075},
  {m5, 0x3D, 0x8076},
  {m5, 0x3D, 0x8077},
  {m5, 0x3D, 0x8078},
  {m5, 0x3D, 0x8079},
  {m5, 0x3D, 0x807A},
  {m5, 0x3D, 0x807B},
  {m5, 0x3D, 0x807D},
  {m5, 0x3D, 0x807E},
  {m5, 0x3D, 0x807F},
  {m5, 0x3D, 0x8081},
  {m5, 0x3D, 0x8082},
  {m5, 0x3E, 0x8083},
  {m5, 0x3E, 0x8084},
  {m5, 0x3E, 0x8085},
  {m5, 0x3E, 0x8086},
  {m5, 0x3E, 0x8087},
  {m5, 0x3E, 0x8088},
  {m5, 0x3E, 0x8089},
  {m5, 0x3E, 0x808A},
  {m5, 0x3E, 0x808B},
  {m5, 0x3E, 0x808D},
  {m5, 0x3E, 0x808E},
  {m5, 0x3F, 0x808F},
  {m5, 0x40, 0x8090},
  {m5, 0x40, 0x8091},
  {m5, 0x40, 0x8092},
  {m5, 0x40, 0x8093},
  {m5, 0x40, 0x8094},
  {m5, 0x40, 0x8095},
  {m5, 0x40, 0x8096},
  {m5, 0x40, 0x8097},
  {m5, 0x40, 0x8098},
  {m5, 0x41, 0x8099},
  {m5, 0x41, 0x809A},
  {m5, 0x41, 0x809B},
  {m5, 0x41, 0x809C},
  {m5, 0x41, 0x809D},
  {m5, 0x41, 0x809E},
  {m5, 0x41, 0x809F},
  {m5, 0x41, 0x80A0},
  {m5, 0x41, 0x80A1},
  {m5, 0x41, 0x80A2},
  {m5, 0x41, 0x80A3},
  {m5, 0x41, 0x80A4},
  {m5, 0x41, 0x80A5},
  {m5, 0x41, 0x80A6},
  {m5, 0x41, 0x80A7},
  {m5, 0x41, 0x80A8},
  {m5, 0x41, 0x8080},
  {m5, 0x41, 0x80A9},
  {m5, 0x41, 0x80AA},
  {m5, 0x41, 0x80AB},
  {m5, 0x42, 0x80AC},
  {m5, 0x42, 0x80B1},
  {m5, 0x42, 0x80AD},
  {m5, 0x42, 0x80AE},
  {m5, 0x42, 0x80AF},
  {m5, 0x42, 0x80B0},
  {m5, 0x42, 0x80B2},
  {m5, 0x42, 0x80B3},
  {m5, 0x42, 0x80B4},
  {m5, 0x42, 0x80B5},
  {m5, 0x42, 0x80B6},
  {m5, 0x42, 0x80B7},
  {m5, 0x42, 0x80B8},
  {m5, 0x42, 0x80B9},
  {m5, 0x42, 0x80BA},
  {m5, 0x42, 0x80BC},
  {m5, 0x42, 0x80BB},
  {m5, 0x42, 0x80BD},
  {m5, 0x42, 0x80BE},
  {m5, 0x42, 0x80BF},
  {m5, 0x42, 0x80C0},
  {m5, 0x42, 0x80C1},
  {m5, 0x42, 0x80C2},
  {m5, 0x42, 0x80C3},
  {m5, 0x42, 0x80C4},
  {m5, 0x42, 0x80C6},
  {m5, 0x42, 0x80C5},
  {m5, 0x42, 0x80C8},
  {m5, 0x42, 0x80C7},
  {m5, 0x42, 0xF001},
  {m5, 0x1, 0xF002},
  {m5, 0x1, 0xF003},
  {m5, 0x1, 0xF006},
  {m5, 0x1, 0xF004},
  {m5, 01, 0x0},
  {NULL, 0, 0}
};
byte p333 = 1;
//int p22 = 0x0CF;
int p2 = 0x0CF;
static mFunc farr[246] = {
  {&f,1}, 
  {&f2,2},
  {&f3,0x24},
  {&f4,0xD7},
  {&f5,0x8033},
  {&f6,0x8081},
  {&f7,0x8018},
  {&f8,0x803B},
  {&f9,0xB8013},
  {&f10,0x8014},
  {&f11,0x8015},
  {&f12,0x805F},
  {&f13,0x8060},
  {&f14,0x8061},
  {&f15,0x2A},
  {&f16,0x8048},
  {&f17,0x10},
  {&f18,0x77},
  {&f19,0x8052},
  {&f20,0x8053},
  {&f21,0xD9},
  {&f22,0x8055},
  {&f23,0xDA},
  {&f24,0x8056},
  {&f25,0x8094},
  {&f26,0x12},
  {&f27,0x14},
  {&f28,0x16},
  {&f29,0x20},
  {&f30,0x1A},
  {&f31,0x21},
  {&f32,0x803D},
  {&f33,0x22},
  {&f34,0x2D},
  {&f35,0x2E},
  {&f36,0x28},
  {&f37,0x4C},
  {&f38,0x46},
  {&f39,0x2F},
  {&f40,0xED},
  {&f41,0x803E},
  {&f42,0x30},
  {&f43,0x803F},
  {&f44,0x31},
  {&f45,0x8040},
  {&f46,0x32},
  {&f47,0x8041},
  {&f48,0x6F},
  {&f49,0x8043},
  {&f50,0x8083},
  {&f51,0x70},
  {&f52,0x8044},
  {&f53,0xD2},
  {&f54,0x8095},
  {&f55,0x3B},
  {&f56,0x8096},
  {&f57,0x44},
  {&f58,0xDB},
  {&f59,0xC8},
  {&f60,0x45},
  {&f61,0x48},
  {&f62,0x49},
  {&f63,0x4A},
  {&f64,0x8077},
  {&f65,0x56},
  {&f66,0x4F},
  {&f67,0x806C},
  {&f68,0x8076},
  {&f69,0x52},
  {&f70,0xB7},
  {&f71,0x60},
  {&f72,0xB8},
  {&f73,0x64},
  {&f74,0xBB},
  {&f75,0x69},
  {&f76,0x6B},
  {&f77,0x6C},
  {&f78,0x85},
  {&f79,0x87},
  {&f80,0x88},
  {&f81,0x9B},
  {&f82,0x90},
  {&f83,0x8036},
  {&f84,0x8E},
  {&f85,0x92},
  {&f86,0x94},
  {&f87,0x95},
  {&f88,0x8069},
  {&f89,0x97},
  {&f90,0x98},
  {&f91,0x8089},
  {&f92,0x8067},
  {&f93,0x9B},
  {&f94,0x9E},
  {&f95,0xCD},
  {&f96,0xF3},
  {&f97,0x8059},
  {&f98,0x808F},
  {&f99,0xA4},
  {&f100,0xA8},
  {&f101,0xAC},
  {&f102,0xB6},
  {&f103,0xB0},
  {&f104,0xB2},
  {&f105,0xB4},
  {&f106,0xAE},
  {&f107,0x57},
  {&f108,0x58},
  {&f109,0x5A},
  {&f110,0xBC},
  {&f111,0xBF},
  {&f112,0x804F},
  {&f113,0xC2},
  {&f114,0xC5},
  {&f115,0x804D},
  {&f116,0xC7},
  {&f117,0x8050},
  {&f118,0xC6},
  {&f119,0x804E},
  {&f120,0xD0},
  {&f121,0x8038},
  {&f122,0xD4},
  {&f123,0x8037},
  {&f124,0xD6},
  {&f125,0xEC},
  {&f126,0xC9},
  {&f127,0xE2},
  {&f128,0xF4},
  {&f129,0xF6},
  {&f130,0x800E},
  {&f131,0x800F},
  {&f132,0x805A},
  {&f133,0x805B},
  {&f134,0x807A},
  {&f135,0x807B},
  {&f136,0x8025},
  {&f137,0x8024},
  {&f138,0x8023},
  {&f139,0x8022},
  {&f140,0xE0},
  {&f141,0xE1},
  {&f142,0x8021},
  {&f143,0x8020},
  {&f144,0xE9},
  {&f145,0xCB},
  {&f146,0xDC},
  {&f147,0xF5},
  {&f148,0xF7},
  {&f149,0x8010},
  {&f150,0x8011},
  {&f151,0x805C},
  {&f152,0x805D},
  {&f153,0x8078},
  {&f154,0x8079},
  {&f155,0x47},
  {&f156,0xDD},
  {&f157,0xDE},
  {&f158,0x8057},
  {&f159,0x8058},
  {&f160,0x807F},
  {&f161,0x84},
  {&f162,0x7D},
  {&f163,0x8012},
  {&f164,0x805E},
  {&f165,0x807E},
  {&f166,0x80},
  {&f167,0xF0},
  {&f168,0xF1},
  {&f169,0x8072},
  {&f170,0xF2},
  {&f171,0xE3},
  {&f172,0x802B},
  {&f173,0x8063},
  {&f174,0xE4},
  {&f175,0x802C},
  {&f176,0x8064},
  {&f177,0x8092},
  {&f178,0x8093},
  {&f179,0xE6},
  {&f180,0x80E2},
  {&f181,0xE8},
  {&f182,0x8030},
  {&f183,0xEE},
  {&f184,0x8084},
  {&f185,0x8090},
  {&f186,0x8091},
  {&f187,0xF9},
  {&f188,0xFB},
  {&f189,0xFD},
  {&f190,0xFE},
  {&f191,0x8001},
  {&f192,0x808D},
  {&f193,0x8009},
  {&f194,0x800B},
  {&f195,0x800C},
  {&f196,0x8073},
  {&f197,0x8017},
  {&f198,0xDF},
  {&f199,0x800D},
  {&f200,0x8026},
  {&f201,0x8027},
  {&f202,0x806A},
  {&f203,0x806B},
  {&f204,0x806E},
  {&f205,0x806F},
  {&f206,0x8028},
  {&f207,0x803C},
  {&f208,0x8068},
  {&f209,0x808A},
  {&f210,0x808E},
  {&f211,0x8098},
  {&f212,0x8099},
  {&f213,0x80A1},
  {&f214,0x80A2},
  {&f215,0x809D},
  {&f216,0x809E},
  {&f217,0x80A7},
  {&f218,0x80A6},
  {&f219,0x80A8},
  {&f220,0x80A0},
  {&f221,0x80A3},
  {&f222,0x80A4},
  {&f223,0x80A5},
  {&f224,0x8080},
  {&f225,0x80A9},
  {&f226,0x80AA},
  {&f227,0x80B8},
  {&f228,0x80B9},
  {&f229,0x80B3},
  {&f230,0x80B4},
  {&f231,0x80B6},
  {&f232,0x80BE},
  {&f233,0x80B7},
  {&f234,0x80BA},
  {&f235,0x80BB},
  {&f236,0x80AF},
  {&f237,0x80B0},
  {&f238,0x80B1},
  {&f239,0x80BF},
  {&f240,0x80C0},
  {&f241,0x80C6},
  {&f242,0x80C5},
  {&f243,0x80B2},
  {&f244,0x80B5},
  {&f245,0x0},
  {NULL, 0}
};
int a1,a2,a3,a4;
long Comperand;
FILE* ptrFile;

LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);//Ёто функци€ окна

void *__cdecl f_malloc_heap(size_t a1, int a2){
  void *memory;
  memory = malloc(a1);
  if (a2) memset(memory, 0, a1);
  return memory;
}

int __cdecl sub_6986C0(char *a1, WPARAM wParam){
  int counts; // eax@1
  int result; // eax@1
  char *lParam; // [sp+0h] [bp-4h]@1

  counts = strlen(a1);
  lParam = (char *)f_malloc_heap(counts + 1, 1);
  strcpy(lParam, a1);
  result = SendNotifyMessageA(hWndInfoClass, 0xFC0u, wParam, (LPARAM)lParam);
  if ( !result )
    result = SendMessageA(hWndInfoClass, 0xFC0u, wParam, (LPARAM)lParam);
  return result;
}

int __cdecl f_wt_set_connection_param1(int a1, int a2, LPARAM *a3, int a4, int a5, char *a6){
	
  int result=0;
  CHAR *lParam;
	
  if ( dword_B80524 && a2 != 3 && a2 != 4 ){
    *a3 = 301;
    result = 0;
  }else{
    switch (a2){
      case 1:
        wt_set_connection_param(Comperand, 10, 1, 0, 0, 0, 0);
        result = 0;
        break;
      case 8:
        SendNotifyMessageA(hWndInfoClass, 0x916u, 0, *a3);
        result = 0;
        break;
      case 3:
        MessageBox(NULL,"Ќе законнектились", "Error", MB_OK);
        lParam = (CHAR *)f_malloc_heap(0x400u, 1);
        if ( wt_get_last_error(Comperand, (int)lParam, 1024) && !*lParam ){
          /*if ( dword_B029F0 )
            f_ins_str_buffer(0x1A66u, lParam, 1024);
          else
            f_ins_str_buffer(0x1A67u, lParam, 1024);*/
        }
        MessageBox(NULL,"Ќе законнектились", "Error", MB_OK);
        SendNotifyMessageA(hWndInfoClass, 0x917u, 0, (LPARAM)lParam);
				result = 0;
        break;
      case 4:
        Comperand = 0;
        result = 0;
        break;
      case 6:
        SendNotifyMessageA(hWndInfoClass, 0x915u, 0, 0);
        result = 0;
        break;
      case 9:
        sub_6986C0(a6, 3u);
        result = 0;
        break;
      case 10:
        sub_6986C0(a6, 1u);
        result = 0;
        break;
      default:
        result = 0;
        break;
    }
  }
	return 0;
}

void wt_init(char *qcrypto_ini){
	char *p3 = '\0';
	int p4 = 256;

  farr[0].prop = &f;
  farr[1].prop = &f2;
  farr[2].prop = &f3;
  //farr[3].prop = NULL;

  marr[0].p = m1;
  marr[1].p = m2;
  marr[2].p = m3;
  marr[3].p = m4;
  marr[4].p = m5;
  //marr[5].p = NULL;

	a1 = wt_init(qcrypto_ini, (int)&p1, (int)&p2, primary_lang_id2,	1, dialect_id2,	(int)hWndInfoClass, 0, 0, 0, 0, p3,	p4);
}

int f_wt_init_crypto_sign_context2(HWND hWnd){
  char v27[512];
	char text[512];
	char v30[260];
  int v14=0;
	int v24=0;
  char v17[1076];
  unsigned int i;
  
  memset(v27, 0, 512*sizeof(char));
	memset(text, 0, 512*sizeof(char));

  a2 = wt_get_sign_crypto_provider((int)&v27, 128, (int)qcrypto_ini, (int)&text, 512);
	strcpy (prt27, v27);
	memset(v10, 0, 260*sizeof(char));
	memset(v30, 0, 260*sizeof(char));

	a3=wt_get_crypto_provider_info((int)&v27, (int)&v10, 260, (int)&v30, 260, (int)&v14, (int)&v24, 0, 0, 0, 0, (int)&text, 512);
	strcpy (prt30, v30);
	strcpy (prt10, v10);

	memset(&v17, 0, 1076);
	v17[0] = 1;
	v17[4] = 2;
	v17[8] = 2;

	for (i=0; i<=strlen(v10); i++){
		v17[i+12]=v10[i];
	}
	v17[540] = 1;
	v17[544] = 2;
	//strncpy(v20, v10, 0x200u);
	a4=wt_init_crypto_sign_context((int)primary_lang_id2, 1, dialect_id2, (int)&v17, (int)hWnd, 0, 0, 0, 0, (int)&text, 512);
  return 1;
}

int f_thread_context(HWND hWnd){
  LCID Locale;
  int v2; 
  Locale = GetThreadLocale();
  v2 = f_wt_init_crypto_sign_context2(hWnd);
  if ( GetThreadLocale() != Locale )
    SetThreadLocale(Locale);
  return v2;
}

void f_wt_get_crypto_provider(int a1){
  char *info_ini = info;
  char v23[1076];
	char size[127];
  char v11[260];
	char v21[260];
  char v27[512];
  char v4[532];
  unsigned int i;
  memset((char *)&size + 1, 0, 0x7Fu);
	wt_get_cipher_crypto_provider((int)&v27, 128, (int)qcrypto_ini, (int)&size, 128);

	memset(v11, 0, 260*sizeof(char));
	memset(v21, 0, 260*sizeof(char));
	int unk_B02A10 = 0;
	int dword_B02A14 = 0;
	int v29 = 0;
	v29 = wt_get_crypto_provider_info((int)&v27, (int)&v11, 260, (int)&v21, 260, (int)&unk_B02A10, (int)&dword_B02A14, 0, 0, 0, 0, (int)&size, 128);

	memset(&v4, 0, 0x214u); 
	v4[0] = 1;
	v4[4] = 2;
	for (i=0; i<=strlen(info_ini); i++){
		v4[i+8]=info_ini[i];
	}

	memset(v23, 0, 1076);

	v23[0] = 1;
	v23[4] = 1;
	v23[8] = 2;
	for (i=0; i<=strlen(v10); i++){
		v23[i+12]=v10[i];
	}

	v23[540] = 4;
	v23[544] = 3;
	Comperand = wt_connect((int)"frontend connection", (int)&unk_B029DC, (void *)&v23, (int)primary_lang_id2, 1, dialect_id2, (int)hWndInfoClass, (int)&v4, (int)f_wt_set_connection_param1, 0, 0, 0, 0, 0, (int)&size, 128);
  if(wt_set_connection_param(Comperand, 7, 1, 0, 0, (int)&size, 128)){
		dword_B029E8 = (void *)wt_getstataddr(Comperand, (int)&size, 128);
	}
}

int commands(int hWnd, WPARAM wParam, HWND lParam){
  switch(wParam){
    case 0x64u:
      fprintf (ptrFile,"111111111111111 vparam=%d\n",(int)wParam);
      f_wt_get_crypto_provider(0);
      return 1;
  }
  return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
		LPTSTR    lpCmdLine, int       nCmdShow){

	WNDCLASS WndClass;//класс окна
	MSG msg;//очередь сообщений окна

	char szClassName[]="InfoClass";

  WndClass.style			= CS_HREDRAW | CS_VREDRAW;  //заполн€ем структуру окна
	WndClass.lpfnWndProc	= WndProc;
	WndClass.cbClsExtra		= 0;
	WndClass.cbWndExtra		= 0;
	WndClass.hInstance		= hInstance;
	WndClass.hIcon			= LoadIcon(NULL, IDI_ERROR);
	WndClass.hCursor		= LoadCursor(NULL, IDC_ARROW);
  WndClass.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	WndClass.lpszMenuName	= NULL;
	WndClass.lpszClassName	= szClassName;

  if(!RegisterClass(&WndClass)){//регистрируем
    MessageBox(NULL,"Cannot register class", "Error", MB_OK);
    return 0;
  }
  /*hWndInfoClass = CreateWindow(szClassName, "Program No 1", //создаем окно
                                    WS_OVERLAPPEDWINDOW,
                                    CW_USEDEFAULT, CW_USEDEFAULT,
                                    CW_USEDEFAULT, CW_USEDEFAULT,
                                    NULL, NULL,
                                    hInstance, NULL);*/
	hWndInfoClass = CreateWindowExA(            // ћы создаем окно и это приводит к запуску сообщений.
                      0,
                      szClassName,
                      "Program No 1",
                      0x2CF0000,               
                      CW_USEDEFAULT, CW_USEDEFAULT,
                      CW_USEDEFAULT, CW_USEDEFAULT,
                      NULL, NULL, hInstance, NULL);

	if(!hWndInfoClass){
    MessageBox(NULL,"Cannot register class", "Error", MB_OK);
    return 0;
  }

  ShowWindow(hWndInfoClass, nCmdShow);//показываем окно
  UpdateWindow(hWndInfoClass);//обновл€ем
	wt_init(qcrypto_ini);
  f_thread_context(hWndInfoClass);
  PostMessageA(hWndInfoClass, 0x111u, 0x64u, 0);
  while (GetMessage(&msg, NULL, 0, 0)){ //начинаем вечный цикл
			TranslateMessage(&msg);
			DispatchMessage(&msg);
	}
	return (int) msg.wParam;
}

void LABEL_188(){

}


  LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam){//это оконна€ функци€
	  HDC hdc;
    PAINTSTRUCT ps;
    RECT Rect;

    if(!ptrFile) ptrFile = fopen("file.txt", "w");
    fprintf (ptrFile,"message=%u, vparam=%d\n",message, (int)wParam);
    //fprintf (ptrFile, "message=%u, vparam=%d, lparam=%d\n",message, (int)wParam, (int)lParam);
	  switch (message){
      case WM_COMMAND:
        commands((int)hWnd, wParam, (HWND)lParam);
          return 0;
		  case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);
        GetClientRect(hWnd,&Rect);
        char *s;
        s=(char*)malloc(600*sizeof(char));
        wsprintf(s, "%d|||%d=%s|||%d=%s,%s|||%d", a1, a2, prt27,  a3, prt10, prt30, a4);
        //wsprintf(s,"fdsfdsfdsfd");
        DrawText(hdc, s, -1, &Rect,
                 DT_SINGLELINE|DT_CENTER|DT_VCENTER);
        EndPaint(hWnd, &ps);
        return 0;
	    case WM_DESTROY:
        fclose (ptrFile);
		    PostQuitMessage(0);
		    return 0;
      case 0xFBAu:
        return 0;
      case 0xFCBu:
        return 0;
      case 0xFDBu:
        return 0;
      case 0xFDCu:
        return 0;
      case 0xFBBu:
        return 0;
      case 0xFBCu:
        return 0;
      case 0xFE7u:
        return 1;
      case 0xFDEu:
        return 1;
      case 0xFC7u:
        return 1;
      case 0xFBDu:
        free((void *)lParam);
        return 0;
      case 0xFC2u:
        free((void *)lParam);
        return 0;
      case 0xFC4u:
        return 0;
      case 0xFC3u:
        return 0;
      case 0xFBEu:
        free((void *)lParam);
        return 0;
      case 0xFBFu:
        return 0;
      case 0xFC5u:
        return 0;
      case 0xFC0u:
        MessageBox(NULL,"готово", "Error", MB_OK);
        free((void *)lParam);
        return 0;
      case 0xFF0u:
        operator delete((void *)lParam);
        return 0;
      case 0xFD6u:
        return 0;
      case 0xFC1u:
      case 0xFEFu:
        free((void *)lParam);
        free((void *)wParam);
        return 0;
      case 0xFC6u:
        return 0;
      case 0xFD3u:
        return 0;
      case 0xFE5u:
        return 0;
      case 0xFE6u:
        return 0;
      case 0xFD9u:
        return 0;
      case 0xFDDu:
        return 0;
      case 0xFD4u:
        return 0;
      case 0xFE8u:
LABEL_124:
        switch ( wParam ){
          case 0x7D3u:
            break;
          case 0x7D8u:
            break;
          case 0x7D6u:
            break;
          case 0x7D4u:
            break;
          case 0x7D9u:
            break;
          case 0x7DAu:
            break;
        }
        return DefWindowProc(hWnd, message, wParam, lParam);
      case 0xFEAu:
      case 0xFEBu:
        return 0;
      case 0xFECu:
        return 0;
      case 0xFEDu:
        free((void *)lParam);
        return 0;
      case 4024:
        return 0;
      case 0x915u:
         LABEL_188();
      case 0x916u:
         LABEL_188();
      case 0x917u:                          
         free((void *)lParam);
         LABEL_188();
      case 0x914u:
         return 0;
      case 0x219u:                                     // переход из WM_DISPLAYCHANGE
         break;
      case 0x211u:                          // WM_ENTERMENULOOP
      case 0x212u:                          // WM_EXITMENULOOP
         break;
      case 0x214u:
         break;
      case 0x216u:
         break;
      case 0x115u:                              // WM_VSCROLL
        return 0;
      case 0x114u:                              // WM_HSCROLL
        return 0;
      case 0x117u:                              // WM_INITMENUPOPUP
        return 0;
      case 0x116u:                              // WM_INITMENU
        return 0;
      case 0x113u:                              // WM_TIMER
        return 0;
      default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
  }
