#ifndef INGAMESTATE_H_INCLUDED
#define INGAMESTATE_H_INCLUDED

namespace game
{
    class InGameState : public GameState
    {
    public:
        InGameState();
        ~InGameState();

        virtual states update();
        virtual void draw();
    };
}

#endif // GAMESTATE_H_INCLUDED
