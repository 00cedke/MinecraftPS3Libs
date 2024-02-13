#ifndef __SOUNDEVENT_H__
#define __SOUNDEVENT_H__

class SoundEvent{
public:

    static SoundEvent *pSoundEventBack = (uintptr_t*)0x14CA684;
    static SoundEvent *pSoundEventCraft = (uintptr_t*)0x14CA688;
    static SoundEvent *pSoundEventFocus = (uintptr_t*)0x14CA690;
    static SoundEvent *pSoundEventPress = (uintptr_t*)0x14CA694;
    static SoundEvent *pSoundEventScroll = (uintptr_t*)0x14CA698;

};

#endif