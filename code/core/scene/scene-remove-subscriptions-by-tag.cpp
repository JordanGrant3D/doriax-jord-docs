#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    scene->removeSubscriptionsByTag(cleanupTag);
    Log::print("subscriptions removed");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    if (!cleanupTag.empty()) {
        scene->removeSubscriptionsByTag(cleanupTag);
    }
    Log::print("subscriptions cleanup ensured");
}
