#ifndef EVENT_H_INCLUDED
#define EVENT_H_INCLUDED
namespace game
{
    using namespace irr;

    class EventFunctor;

    class EventReciever : public IEventReceiver
    {
    public:
        EventReciever();
        ~EventReciever();

        bool OnEvent(const SEvent& event);
        bool globEventHandeler(const SEvent& event);
        void setUpdate(bool (*update) (const SEvent& event));

    private:
        bool (*update) (const SEvent& event);
    };
}

#endif
