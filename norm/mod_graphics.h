#pragma once
#include "SFastFont.h"
#include "mod.h"

class graphics : public norm_dll::mod {
public:
    graphics(norm_dll::norm* c_state, json* config);
    virtual ~graphics();
    void get_current_setting(json& settings);
	  void print_screen(char* str, int x, int y, int a = 255, int r = 255, int g = 255, int b = 0);

private:
    LPDIRECTDRAWSURFACE7 m_pddsFontTexture = nullptr;
    CSFastFont* m_pSFastFont = nullptr;
    int initialized = 0;
    bool vsync_active = false; //default: disable vsync
  
    void ddraw_release();
    void init(IDirect3DDevice7* d3ddevice);
    HRESULT WaitForVerticalBlank(DWORD*, HANDLE*);
    int get_talk_type(char*, int*);
    HRESULT begin_scene(IDirect3DDevice7**);
    HRESULT end_scene(IDirect3DDevice7**);
};
