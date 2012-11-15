#include "InGameState.h"

namespace game
{
    InGameState::InGameState() {}
    InGameState::~InGameState() {}

    int InGameState::addLight(lua_State* L)
    {
        game::sceneManager->addLightSceneNode(0, core::vector3df(0, 100, 0), video::SColorf(0, 0, 255), 100);

        return 0;
    }

    states InGameState::update ()
    {
        sceneManager->addCameraSceneNodeFPS();
        scene::ISceneNode* node = sceneManager->addCubeSceneNode();
        node->setMaterialFlag(video::EMF_LIGHTING, false);

        draw(true, true, video::SColor(255, 0, 0, 0));
        return S_CONTINUE;
    }
}
