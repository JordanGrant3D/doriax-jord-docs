#include "testerScript.h"

#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    Object player(scene, getEntity());

    if (player.getPosition().distance(target) > 1.0f) {
        Log::print("player off marker");
    } else {
        Log::print("player on marker");
    }
}
