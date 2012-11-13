#include "Game.h"

namespace game
{
    using namespace irr;
    Game::Game() {}
    Game::~Game() {}

    int Game::init(int x = 800, int y = 600)
    {
        device = createDevice(video::EDT_OPENGL, core::dimension2d<u32>(x, y), 32, false, false, false, 0);
        driver = device->getVideoDriver();
        sceneMgr = device->getSceneManager();

        if(device)
        {
            stateManager.pushState(NULL); //TODO get a working state set up for the )
            return 0;
        }

        return 1;
    }

    void Game::run()
    {
        while (device->isWindowActive())
        {

        }
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
    }
}
