#include "GameState.h"

namespace game
{
    GameState::GameState()
    {
        luaState = luaL_newstate();

        luaL_openlibs(luaState);

        if(!luaState)
        {
            throw "LuaState loading error";
        }

    }

    GameState::~GameState()
    {
        lua_close(luaState);
    }

    void GameState::draw(bool x, bool y, const video::SColor& color)
    {
        driver->beginScene(x, y, color);
            sceneManager->drawAll();
        driver->endScene();
    }
}
