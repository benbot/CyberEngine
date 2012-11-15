#include "Game.h"

namespace game
{
    using namespace irr;
    Game::Game() {}
    Game::~Game() {}

    int Game::init(int x = 800, int y = 600)
    {
        device = createDevice(video::EDT_OPENGL, core::dimension2d<u32>(x, y), 16, false, false, false, &eventReciever);
        driver = device->getVideoDriver();
        sceneManager = device->getSceneManager();
        if(device)
        {
            stateManager.pushState(new InGameState());
            return 0;
        }

        return 1;
    }

    void Game::run()
    {
        while (device->run())
        {
            switch(stateManager.getCurrentState()->update())
            {
            case game::S_CONTINUE:
                continue;
                break;
            default:
                throw "Error switch";
                break;
            }
        }
    }

    void Game::close()
    {
        device->closeDevice();
    }
}
