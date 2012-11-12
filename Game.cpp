#include "Game.h"

namespace game
{
    Game::Game() {}
    Game::~Game() {}

    int Game::init(int x = 800, int y = 600)
    {
        device = irr::createDevice(video::EDT_OPENGL, irr::core::dimension2d<u32>(x, y));
        sceneMgr = device->getSceneManager();
    }
}
