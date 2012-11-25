#include "GameStateMgr.h"

#define topState states.top()

namespace game
{
    GameStateMgr::GameStateMgr() {}
    GameStateMgr::~GameStateMgr() {}

    void GameStateMgr::pushState(GameState* state)
    {
        states.push(state);
    }

    GameState* GameStateMgr::popState()
    {
        GameState* temp = topState;
        states.pop();
        return temp;
    }

    GameState* GameStateMgr::changeState(GameState* state)
    {
        GameState* temp = topState;
        states.pop();
        states.push(state);
        return temp;
    }

    GameState* GameStateMgr::getCurrentState()
    {
        return states.top();
    }
};
