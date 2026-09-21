#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (releaseCallbacks) {
        releaseCallbacks = false;
        Engine::clearComponentSubscriptions(getScene());
        Log::print("component subscriptions cleared");
    }
}
