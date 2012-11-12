#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "EventReciever.h"
#include "StateSystem/GameState.h"
#include "StateSystem/GameStateMgr.h"
#include "StateSystem/InGameState.h"

namespace game
{
    using namespace irr;
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
        IrrlichtDevice* device = 0;
        scene::ISceneManager* sceneMgr = 0;
        video::IVideoDriver* driver = 0;
    };
};

#endif // GAME_H_INCLUDED
