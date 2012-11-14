#ifndef NAMESPACE_H_INCLUDED
#define NAMESPACE_H_INCLUDED

namespace game
{
    using namespace irr;

    extern IrrlichtDevice* device;
    extern scene::ISceneManager* smgr;
    extern video::IVideoDriver* driver;
}

#endif // NAMESPACE_H_INCLUDED
