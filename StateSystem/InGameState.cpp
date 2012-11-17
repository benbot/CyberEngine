#include "InGameState.h"

namespace game
{
    InGameState::InGameState()
    {

    }

    InGameState::~InGameState() {}

    states InGameState::update ()
    {
        draw(true, true, video::SColor(255, 60, 20, 200));
        return S_CONTINUE;
    }
}
