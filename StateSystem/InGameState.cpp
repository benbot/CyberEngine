#include "InGameState.h"

namespace game
{
    InGameState::InGameState()
    {
            device->getFileSystem()->addFileArchive("///home/dartosgamer/Documents/Projects/CyberEngine/map-20kdm2.pk3");
            scene::IAnimatedMesh* mesh = sceneManager->getMesh("20kdm2.bsp");
            sceneManager->addCameraSceneNodeFPS();
            scene::ISceneNode* node = sceneManager->addOctreeSceneNode(mesh->getMesh(0));
    }

    InGameState::~InGameState() {}

    int InGameState::addLight(lua_State* L)
    {
        game::sceneManager->addLightSceneNode(0, core::vector3df(0, 100, 0), video::SColorf(0, 0, 255), 100);

        return 0;
    }

    states InGameState::update ()
    {
        draw(true, true, video::SColor(255, 60, 20, 200));
        return S_CONTINUE;
    }
}
