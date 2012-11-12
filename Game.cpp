#include "Game.h"

namespace game
{
    using namespace irr;
    Game::Game() {}
    Game::~Game() {}

    int Game::init(int x = 800, int y = 600)
    {
<<<<<<< HEAD
        device = createDevice(video::EDT_OPENGL, core::dimension2d<u32>(x, y), 32, false, false, false, 0);
        driver = device->getVideoDriver();
        sceneMgr = device->getSceneManager();

        if(device)
        {
            return 0;
        }

        return 1;
    }

    void Game::run()
    {

    }

    void Game::close()
    {
        device->closeDevice();
    }

    IrrlichtDevice* Game::getDevice()
    {
        return device;
    }

    video::IVideoDriver* Game::getDriver()
    {
        return driver;
    }

    scene::ISceneManager* Game::getSceneManager()
    {
        return sceneMgr;
=======
        device = irr::createDevice(video::EDT_OPENGL, irr::core::dimension2d<u32>(x, y));
        sceneMgr = device->getSceneManager();
>>>>>>> baf385c66d7faba0bd26d441f5be0b09b3c061fa
    }
}
