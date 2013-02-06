#ifndef PORT_MINGW_H
#define PORT_MINGW_H

#include <windows.h>
// Some constants and functions from winnls.h in the Vista Platform SDK
// Use traditional language ID convention
const unsigned MUI_LANGUAGE_ID = 0x4; 
// Use ISO language (culture) name convention
const unsigned MUI_LANGUAGE_NAME = 0x8; 
// GetThreadPreferredUILanguages merges in parent and base languages
const unsigned MUI_MERGE_SYSTEM_FALLBACK = 0x10; 
// GetThreadPreferredUILanguages merges in user preferred languages
const unsigned MUI_MERGE_USER_FALLBACK = 0x20; 
// GetThreadPreferredUILanguages merges in thread preferred languages
const unsigned MUI_THREAD_LANGUAGES = 0x40; 
// SetThreadPreferredUILanguages takes on console specific behavior
const unsigned MUI_CONSOLE_FILTER = 0x100; 
// SetThreadPreferredUILanguages takes on complex script specific behavior
const unsigned MUI_COMPLEX_SCRIPT_FILTER = 0x200; 
// Reset MUI_CONSOLE_FILTER and MUI_COMPLEX_SCRIPT_FILTER 
const unsigned MUI_RESET_FILTERS = 0x001; 

typedef WCHAR* PZZWSTR;



#endif /* PORT_MINGW_H */

