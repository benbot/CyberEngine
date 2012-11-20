#ifndef NAMESPACE_H_INCLUDED
#define NAMESPACE_H_INCLUDED
#include "EventReciever.h"

namespace game
{
    using namespace irr;

    extern IrrlichtDevice* device;
    extern scene::ISceneManager* sceneManager;
    extern video::IVideoDriver* driver;
    extern EventReciever eventReciever;
}

#endif // NAMESPACE_H_INCLUDED
