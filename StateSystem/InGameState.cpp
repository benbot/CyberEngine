#include "InGameState.h"

namespace game
{
    InGameState::InGameState() {}

    InGameState::~InGameState()
    {
        lua_close(luaState);
    }

    int InGameState::addLight(lua_State* L)
    {
        game::smgr->addLightSceneNode(0, core::vector3df(0, 100, 0), video::SColorf(0, 0, 255), 100);
    }

    int InGameState::init()
    {
        luaState = luaL_newstate();

        if(luaState)
        {
            lua_register(luaState, "addLight", addLight);

            return 0;
        }

        return -1;
    }

    states InGameState::update ()
    {
        draw();
        return S_CONTINUE;
    }
}
