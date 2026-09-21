#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    SpriteComponent& sprite = getComponent<SpriteComponent>();
    MeshComponent& mesh = getComponent<MeshComponent>();
    (void)badgeSprite;
    if (!getScene()->getSystem<MeshSystem>()->createOrUpdateSprite(sprite, mesh)) {
        Log::print("badge sprite rebuild deferred");
        return;
    }
    Log::print("badge sprite rebuilt");
}
