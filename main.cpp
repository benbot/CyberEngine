#include "Game.h"

int main()
{
    try
    {
        game::Game game;

        game.init(500, 500);
        game.run();
    }
    catch (const char* e)
    {
        std::cout << e;
    }

    return 0;
}
