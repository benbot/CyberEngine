#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "EventReciever.h"
#include "StateSystem/GameState.h"
#include "StateSystem/GameStateMgr.h"
#include "StateSystem/InGameState.h"

namespace game
{
    using namespace irr;

    class Game
    {
    public:
        Game();
        ~Game();

        int init(int x, int y);
        void run();
        void close();

    private:
        GameStateMgr stateManager;
        EventReciever eventReciever;
    };
};

#endif // GAME_H_INCLUDED
