#ifndef __CONSOLE_UI_CONTROLLER_H__
#define __CONSOLE_UI_CONTROLLER_H__

#include "../util/SoundEngine/SoundEvent.hpp"

uintptr_t ConsoleUIControllerHooker = 0x1558228;
int PlayUISFXHooker = 0x886798;

class ConsoleUIController {
public:

    static inline ConsoleUIController *GetUIController() {
        return (ConsoleUIController*)ConsoleUIControllerHooker;
    }

    inline void PlayUISFX(SoundEvent *sound) {
        return ((void(*)(ConsoleUIController*, SoundEvent*))PlayUISFXHooker)
        (this, sound);
    }

};

#endif