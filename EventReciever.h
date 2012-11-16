#ifndef EVENT_H_INCLUDED
#define EVENT_H_INCLUDED
namespace game
{
    using namespace irr;

    class EventReciever : public IEventReceiver
    {
    public:

        bool OnEvent(const SEvent& event);
    };
}

#endif
