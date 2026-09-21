#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (pruneTags) {
        pruneTags = false;
        Engine::removeSubscriptionsByTag(tagFilter);
        Log::print("subscriptions pruned: %s", tagFilter.c_str());
    }
}
