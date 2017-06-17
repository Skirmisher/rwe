#ifndef RWE_TRIANGLESCENE_H
#define RWE_TRIANGLESCENE_H

#include <rwe/SceneManager.h>
#include <rwe/GraphicsContext.h>

namespace rwe
{
    class TriangleScene final : public SceneManager::Scene
    {
    public:
        void onKeyDown(SceneManager& sceneManager, const SDL_Keysym& key) final;
        void render(GraphicsContext& graphics) final;
    };
}

#endif
