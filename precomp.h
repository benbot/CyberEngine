#ifndef PRECOMP_H_INCLUDED
#define PRECOMP_H_INCLUDED

//this is for debug only
#include <iostream>
//end debug stuff

#if  (!defined (WX_PRECOMP))
    #define WX_PRECOMP
#endif

#include "irrlicht.h"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"
#include "namespace.h"

extern "C"
{
    #include "luaJIT/lua.h"
    #include "luaJIT/lualib.h"
    #include "luaJIT/lauxlib.h"
}

#endif // PRECOMP_H_INCLUDED
