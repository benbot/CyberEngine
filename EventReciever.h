#ifndef EVENT_H_INCLUDED
#define EVENT_H_INCLUDED
namespace game
{
    class EventReciever : public irr::IEventReceiver
    {
    public:
        EventReciever();
        ~EventReciever();

        virtual bool OnEvent(const irr::SEvent& event);
    };
}

#endif
