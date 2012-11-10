#ifndef GAMESTATE_H_INCLUDED
#define GAMESTATE_H_INCLUDED

#define MAINMENU 0
#define GAME 1
#define KILL 42

namespace game
{
    class GameState
    {
    public:
        GameState();
        ~GameState();
        virtual int update() = 0;
        virtual void draw() = 0;

    };
};

#endif // GAMESTATE_H_INCLUDED
