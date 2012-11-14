#ifndef GAMESTATE_H_INCLUDED
#define GAMESTATE_H_INCLUDED

#define MAINMENU 0
#define GAME 1
#define KILL 42

namespace game
{
    enum states
    {
        S_CONTINUE,
        S_INGAME,
        S_MENU,
        S_QUIT
    };

    class GameState
    {
    public:
        GameState();
        ~GameState();
        virtual int init() = 0;
        virtual states update() = 0;

    protected:
        virtual void draw();
        lua_State* luaState;
    };
};

#endif // GAMESTATE_H_INCLUDED
