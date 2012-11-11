#include "Game.h"

using namespace irr;

int main()
{

    IrrlichtDevice* device = createDevice(video::EDT_OPENGL, core::dimension2d<u32>(600,600));

    scene::ISceneManager* mgr = device->getSceneManager();
    video::IVideoDriver*driver = device->getVideoDriver();

    device->getFileSystem()->addFileArchive("///home/dartosgamer/Downloads/map-losttemple.pk3");

    scene::IAnimatedMesh* mesh = mgr->getMesh("losttemple.bsp");
    scene::ISceneNode* node = 0;

    node = mgr->addMeshSceneNode(mesh->getMesh(0), 0, 0);
    mgr->addCameraSceneNodeFPS();


    while(device->run())
    {
        driver->beginScene(true, true, video::SColor(255, 0, 0, 0));
        mgr->drawAll();
    //    std::cout << device->getTimer()->getTime()/1000 << std::endl;
        driver->endScene();
    }

    return 0;
}
