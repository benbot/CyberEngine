#include "EventReciever.h"


namespace game
{
    using namespace irr;

    EventReciever::EventReciever()
    {
        update = NULL;
    }

    EventReciever::~EventReciever() {}

    bool EventReciever::OnEvent(const SEvent& event)
    {
        int ret = 0;
        if(update != NULL)
        {
            ret = update(event);
            if(ret != 0)
            {
                return ret;
            }
        }

        return globEventHandeler(event);

    }

    bool EventReciever::globEventHandeler(const SEvent& event)
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

    void EventReciever::setUpdate(bool (*update) (const SEvent& event))
    {
        this->update = update;
    }

}
