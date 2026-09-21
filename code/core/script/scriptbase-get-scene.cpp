#include "testerScript.h"

#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
    UNREGISTER_ENGINE_EVENT(onViewLoaded);
    UNREGISTER_ENGINE_EVENT(onUpdate);
}

void testerScript::onViewLoaded() {
    if (getScene() == nullptr) {
        Log::print("getScene returned null, script has no scene");
        return;
    }
    Log::print("getScene returned script scene");
}

void testerScript::onUpdate() {
    if (!isActive) return;

    Scene* activeScene = getScene();
    if (activeScene == nullptr) {
        Log::print("no scene bound to script");
        return;
    }

    Object obj(activeScene, getEntity());
    obj.setPosition(obj.getPosition() + Vector3(orbitSpeed * Engine::getDeltatime(), 0.0f, 0.0f));
    Log::print("strafing via getScene handle");
}
