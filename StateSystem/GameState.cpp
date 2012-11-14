#include "GameState.h"

namespace game
{
    GameState::GameState()
    {
        //luaState = luaL_newstate();
    }

    GameState::~GameState()
    {
        //lua_close(luaState);
    }

    void GameState::draw()
    {
        driver->beginScene(true, true, video::SColor(255, 0, 0, 0));
        smgr->drawAll();
        driver->endScene();
    }
}
