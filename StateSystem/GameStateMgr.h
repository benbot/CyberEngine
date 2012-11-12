#ifndef GAMESTATEMGR_H_INCLUDED
#define GAMESTATEMGR_H_INCLUDED
#include "GameState.h"
#include <stack>

namespace game
{
    class GameStateMgr
    {
    public:
        GameStateMgr();
        ~GameStateMgr();

        void pushState(GameState* state);
        GameState* popState();
        GameState* changeState(GameState* state);
        GameState* getCurrentState();

    private:
        std::stack<GameState*> states;
    };
};

#endif // GAMESTATEMGR_H_INCLUDED
