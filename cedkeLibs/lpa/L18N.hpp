#ifndef __L18N_H__
#define __L18N_H__

#include <string>
#include <vector>

class Localization;

class I18n
{
public:
    wchar_t* l18n[0x234];
    static void mCurrentLanguage;
	static void mFormatDictionary;
	static void mLanguages;
	
};


#endif