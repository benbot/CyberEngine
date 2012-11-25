#include "InGameState.h"

namespace game
{
    InGameState::InGameState()
    {
        device->getFileSystem()->addFileArchive("./map-20kdm2.pk3");
        scene::IAnimatedMesh* mesh = sceneManager->getMesh("20kdm2.bsp");
        scene::IMeshSceneNode* node = sceneManager->addOctreeSceneNode(mesh, 0, 1);
        scene::ITriangleSelector* trisel = sceneManager->createOctreeTriangleSelector(node->getMesh(), node, 128);
        node->setTriangleSelector(trisel);
        scene::ICameraSceneNode* cam = sceneManager->addCameraSceneNodeFPS(0, 100, .3f, 0);
        scene::ISceneNodeAnimator* anim = sceneManager->createCollisionResponseAnimator(trisel, cam, core::vector3df(30, 50, 30), core::vector3df(0, 0, 0), core::vector3df(0, 30, 0));
        cam->addAnimator(anim);
        loadUpdater();
    }

    InGameState::~InGameState() {}

    void InGameState::loadUpdater()
    {
        eventReciever.setUpdate(eventHandeler);
    }

    bool InGameState::eventHandeler(const SEvent& event)
    {
        if(event.EventType == EET_KEY_INPUT_EVENT)
        {
            switch(event.KeyInput.Key)
            {

            }
        }

        return false;
    }

    states InGameState::update ()
    {
        draw(true, true, video::SColor(255, 60, 20, 200));
        return S_CONTINUE;
    }
}
