#include "Game.h"

int main()
{
    try
    {
        game::Game game;

        game.init(800, 600);
        game.run();
    }
    catch (const char* e)
    {
        std::cout << e;
    }

    return 0;
}
