#include "InGameState.h"

namespace game
{
    InGameState::InGameState()
    {
        device->getFileSystem()->addFileArchive("./map-20kdm2.pk3");
        scene::IAnimatedMesh* mesh = sceneManager->getMesh("20kdm2.bsp");
        sceneManager->addCameraSceneNodeFPS();
        scene::ISceneNode* node = sceneManager->addOctreeSceneNode(mesh, 0, 1);
        bool (*update) (const SEvent& event) = eventHandeler;
    }

    InGameState::~InGameState() {}


    bool InGameState::eventHandeler(const SEvent& event)
    {
        if(event.EventType == EET_KEY_INPUT_EVENT)
        {
            switch(event.KeyInput.Key)
            {
            case KEY_SPACE:
                device->closeDevice();
                return true;
                break;
            }
        }
    }

    states InGameState::update ()
    {
        draw(true, true, video::SColor(255, 60, 20, 200));
        return S_CONTINUE;
    }
}
