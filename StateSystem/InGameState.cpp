#include "InGameState.h"

namespace game
{
    InGameState::InGameState()
    {
            device->getFileSystem()->addFileArchive("///home/dartosgamer/Documents/Projects/CyberEngine/map-20kdm2.pk3");
        scene::IAnimatedMesh* mesh = sceneManager->getMesh("20kdm2.bsp");
        sceneManager->addCameraSceneNodeFPS();
        scene::ISceneNode* node = sceneManager->addOctreeSceneNode(mesh->getMesh(0));
        node->setMaterialFlag(video::EMF_LIGHTING, false);
    }
    InGameState::~InGameState() {}

    int InGameState::addLight(lua_State* L)
    {
        game::sceneManager->addLightSceneNode(0, core::vector3df(0, 100, 0), video::SColorf(0, 0, 255), 100);

        return 0;
    }

    states InGameState::update ()
    {


        draw(true, true, video::SColor(255, 0, 0, 0));
        return S_CONTINUE;
    }
}
