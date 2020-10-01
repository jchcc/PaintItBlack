#pragma once

//
// CRenderer defines
//
typedef bool(__thiscall* lpDrawScene)(void*);

//struct CRenderer {
#define RENDERER_DATA                  \
    /* 0x0	*/ BYTE offset0[0x24];	   \
    /* 0x24 */ ULONG width;            \
    /* 0x28 */ ULONG height;           \
    /* 0x2C */ BYTE offset2[0x18];     \
    /* 0x44 */ int fps;
//};

#define DRAWSCENE_FN 0x0048FA70
#define RENDERER_PTR *reinterpret_cast<DWORD*>(0x00DE4480)
//
// CSession defines
//
typedef int(__thiscall* lpGetTalkType)(void*, void*, int, int);
typedef void(__thiscall* lpRecalcAveragePingTime)(void*, unsigned long);

#define PGETTALKTYPE_FN int __fastcall proxyGetTalkType(void* this_obj, DWORD EDX, void* a2, int a3, int a4)

//struct CSession {
#define SESSION_DATA                      	\
    /* +0x0	   */ BYTE offset0[0x768]; 		\
	/* +0x768  */ char cur_map[0x14];		\
	/* +0x77C  */ BYTE offset1[0x8];		\
    /* +0x784  */ ULONG average_ping_time; 	\
    /* +0x788  */ BYTE offset2[0x6F4];     	\
	/* +0xE7C  */ int sex;					\
	/* +0xE80  */ BYTE offset3[0x744];		\
    /* +0x15EC */ ULONG aid;               	\
    /* +0x15F0 */ ULONG gid;               	\
    /* +0x15F4 */ BYTE offset4[0x8];       	\
    /* +0x15FC */ int job;                 	\
    /* +0x1600 */ int exp;                 	\
	/* +0x1604 */ BYTE offset6[0x4];       	\
    /* +0x1608 */ int next_exp;            	\
	/* +0x160C */ BYTE offset7[0x4];		\
	/* +0x1610 */ int jobnextexp;			\
	/* +0x1614 */ BYTE offset8[0x4];		\
	/* +0x1618 */ int jobexp;				\
	/* +0x161C */ BYTE offset9[0x4];		\
	/* +0x1620 */ int level;				\
	/* +0x1624 */ BYTE offset10[0x4];		\
    /* +0x1628 */ int joblevel;            	\
    /* +0x162C */ int skillPoints;			\
    /* +0x1630 */ BYTE offset11[0x6168];   \
    /* +0x79E8 */ char c_name[40];
//};

#define GETTALKTYPE_FN				0x00AE6170
#define RECALCAVERAGEPINGTIME_FN	0x00AF9C20
#define SESSION_PTR					0x0113F030

//
// CUIWindowMgr defines
//
#define UIWINDOWMGR_MAKEWINDOW_FN 0x0074C3B0
#define UIWINDOWMGR_PTR 0x00EB1080

struct UIFrameWnd {};
typedef UIFrameWnd* (__thiscall* lpMakeWindow)(void*, int);

// sub types
// CUIBookWnd
#define UIBOOKWND_SENDMSG_FN 0x0066D670

typedef void(__thiscall* lpSendMsg)(void*, int, int, char*, int, int, int);
//struct CUIBookWnd {
#define UIBOOKWND_DATA		\
		/* 0x0	*/ BYTE offset0[0x9c];	\
		/* 0x9c	*/ char book_title[64];
    //}

#pragma once
