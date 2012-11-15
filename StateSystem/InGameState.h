#ifndef INGAMESTATE_H_INCLUDED
#define INGAMESTATE_H_INCLUDED
#include "GameState.h"

namespace game
{

    class InGameState : public GameState
    {
    public:

        InGameState();
        ~InGameState();

        virtual states update();
        static int addLight(lua_State* L);
    };
}

#endif // GAMESTATE_H_INCLUDED
