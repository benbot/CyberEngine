#ifndef EVENT_H_INCLUDED
#define EVENT_H_INCLUDED
namespace game
{
    using namespace irr;

    class EventReciever : public IEventReceiver
    {
    public:

        bool OnEvent(const SEvent& event)
        {
            if(event.EventType == EET_KEY_INPUT_EVENT)
            {
                switch(event.KeyInput.Key)
                {
                case KEY_ESCAPE:
                    device->closeDevice();
                    break;
                }
            }
        }
    };
}

#endif
