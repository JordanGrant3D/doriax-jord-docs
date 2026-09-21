#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (resetEvents) {
        resetEvents = false;
        Engine::clearAllSubscriptions(false);
        Log::print("event subscriptions cleared");
    }
}
