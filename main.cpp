#include "Game.h"

using namespace irr;

IrrlichtDevice* device;



int main()
{
    device = createDevice(video::EDT_OPENGL, core::dimension2d<u32>(600,600), 16, false, false, false);

    scene::ISceneManager* mgr = device->getSceneManager();
    video::IVideoDriver*driver = device->getVideoDriver();


    scene::IAnimatedMesh* mesh = 0;

    scene::ISceneNode* node = 0;

    //node = mgr->addOctreeSceneNode(mesh->getMesh(0), 0, 0);
    //node->getMaterial(0).SpecularColor.set(0, 0, 0, 0);

        mesh = mgr->addHillPlaneMesh( "myHill",
        core::dimension2d<f32>(20,20),
        core::dimension2d<u32>(40,40), 0, 0,
        core::dimension2d<f32>(0,0),
        core::dimension2d<f32>(10,10));

    node = mgr->addWaterSurfaceSceneNode(mesh->getMesh(0), 50.0f, 300.0f, 30.0f);
    node->setPosition(core::vector3df(0,7,0));

    node->setMaterialType(video::EMT_REFLECTION_2_LAYER);
    node->setMaterialTexture(1, driver->getTexture("fun.jpg"));
    //node->setMaterialFlag(video::EMF_LIGHTING, false);

    node = mgr->addLightSceneNode(0, core::vector3df(0, 100, 0), video::SColorf(20, 200, 0), 100);
    scene::ISceneNodeAnimator* anim;
    anim = mgr->createFlyCircleAnimator(node->getPosition(), 1000);
    node->addAnimator(anim);
    anim->drop();

    node = mgr->addLightSceneNode((0, core::vector3df(0, 100, 0), video::SColorf(0, 0, 100), 100));

    mgr->addCameraSceneNodeFPS();

    while(device->run())
    {
        driver->beginScene(true, true, video::SColor(255, 0, 0, 0));
        mgr->drawAll();
        driver->endScene();

        int x = driver->getFPS();

        core::stringw a = "";
        a += x;

        device->setWindowCaption(a.c_str());
    }

    return 0;
}
