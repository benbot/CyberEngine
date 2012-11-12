#include "Game.h"

using namespace irr;

int main()
{

    IrrlichtDevice* device = createDevice(video::EDT_OPENGL, core::dimension2d<u32>(600,600));

    scene::ISceneManager* mgr = device->getSceneManager();
    video::IVideoDriver*driver = device->getVideoDriver();

    device->getFileSystem()->addFileArchive("///home/dartosgamer/Downloads/map-losttemple.pk3");

    scene::IAnimatedMesh* mesh = mgr->getMesh("losttemple.bsp");
<<<<<<< HEAD
    scene::ISceneNode* node = mgr->addMeshSceneNode(mesh->getMesh(0), 0, 0);
=======
    scene::ISceneNode* node = 0;

    node = mgr->addOctreeSceneNode(mesh->getMesh(0), 0, 0);
>>>>>>> baf385c66d7faba0bd26d441f5be0b09b3c061fa
    mgr->addCameraSceneNodeFPS();

    while(device->run())
    {
        driver->beginScene(true, true, video::SColor(255, 0, 0, 0));
        mgr->drawAll();
<<<<<<< HEAD
=======
       // std::cout << device->getTimer()->getTime()/1000 << std::endl;
>>>>>>> baf385c66d7faba0bd26d441f5be0b09b3c061fa
        driver->endScene();
    }

    return 0;
}
