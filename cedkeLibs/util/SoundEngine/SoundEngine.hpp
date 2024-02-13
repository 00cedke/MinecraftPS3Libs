#ifndef __SOUNDENGINE_H__
#define __SOUNDENGINE_H__

#include <vector>

class Options;
class Minecraft;

// Size : 2636
class SoundEngine
{
public:
	void **vtable;				// 0
	char filler1[60];				// 4
	Options *options;				// 64
	char filler2[2540];				// 68
	char filler3[12];				// 2620
	Minecraft *mc;					// 2632
};


#endif 