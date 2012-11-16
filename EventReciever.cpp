#include "EventReciever.h"


namespace game
{
    using namespace irr;

   bool EventReciever::OnEvent(const SEvent& event)
    {
        if(event.EventType == EET_KEY_INPUT_EVENT)
        {
            switch(event.KeyInput.Key)
            {
            case KEY_ESCAPE:
                device->closeDevice();
                return true;
                break;
            }
        }

        return false;
    }
}
