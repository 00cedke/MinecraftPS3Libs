#ifndef __MINECRAFT_H__
#define __MINECRAFT_H__

#include <string>
#include <memory>

class Minecraft {
public:

    uint32_t* m_dataFixerUpper; //0x0000 
    char _0x0008[8];
    uint32_t m_displayWidth; //0x0010 
    int m_displayHeight; //0x0014 
    int m_displayWidth2; //0x0018 
    uint32_t m_displayHeight2; //0x001C 
    uintptr_t* m_worldTime; //0x0020 
    char _0x0024[8];
    uint32_t* m_levelRenderer; //0x0030 
    uintptr_t* m_SmartPointerMultiplayerLocalPlayer; //0x0038 
    uintptr_t* _0x003C; //0x003C 
    char _0x0040[4];
    uintptr_t* m_SmartPointerMultiplayerLocalPlayer2; //0x0048 
    char _0x004C[24];
    char _0x0068[0x98];
    uintptr_t m_fontRender; //0x00FC
};

#endif 