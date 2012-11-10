#include "GameStateMgr.h"

namespace game
{
    GameStateMgr::GameStateMgr() {}
    GameStateMgr::~GameStateMgr() {}

    void GameStateMgr::addState(GameState* state)
    {
        states.push(state);
    }

    GameState* GameStateMgr::popState()
    {
        states.pop();
    }

    GameState* GameStateMgr::changeState(GameState* state)
    {
        GameState* temp = states.top();
        states.pop();
        states.push(state);
        return temp;
    }

    GameState* GameStateMgr::getCurrentState()
    {
        return states.top();
    }
};
