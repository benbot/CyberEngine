#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "EventReciever.h"
#include "StateSystem/GameState.h"
#include "StateSystem/GameStateMgr.h"
#include "StateSystem/InGameState.h"

namespace game
{

    enum states
    {
        S_INGAME,
        S_MENU,
        S_QUIT
    };

    class Game
    {
    public:
        Game();
        ~Game();

        int init(int x, int y);
        void update();
        void close();

    private:
        GameStateMgr stateManager;
        EventReciever eventReciever;
    };
};

#endif // GAME_H_INCLUDED
