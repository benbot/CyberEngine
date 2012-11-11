#include "irrlicht.h"

using namespace irr;

int main()
{
    IrrlichtDevice* device = createDevice(video::EDT_SOFTWARE, core::dimension2d<u32>(600,600));

    scene::ISceneManager* mgr = device->getSceneManager();
    video::IVideoDriver*driver = device->getVideoDriver();

    scene::ISceneNode* node = mgr->addCubeSceneNode();

    //node->setPosition(core::vector3df(0, 0, 10));
    node->setMaterialFlag(video::EMF_LIGHTING, false);
    //mgr->addCameraSceneNode(0, core::vector3df(0, 30, -40), core::vector3df(0, 0, 0));


    scene::ICameraSceneNode* node2 = mgr->addCameraSceneNodeFPS(0, 0, .3);
    node2->setPosition(core::vector3df(0, 0, -40));

    while(device->run())
    {
        driver->beginScene(true, true, video::SColor(255, 0, 0, 0));
        mgr->drawAll();
        driver->endScene();
    }
}
