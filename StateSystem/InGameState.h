#ifndef INGAMESTATE_H_INCLUDED
#define INGAMESTATE_H_INCLUDED
#include "GameState.h"
#include <map>
#include <string>

namespace game
{

    class InGameState : public GameState
    {
    public:

        InGameState();
        ~InGameState();

        virtual states update();
        static int addLight(lua_State* L);
    private:

        bool eventHandeler(const SEvent& event);

        std::map<scene::IAnimatedMesh*, const std::string> meshes;
        std::map<scene::ISceneNode*, const std::string> nodes;
    };
}

#endif // GAMESTATE_H_INCLUDED
