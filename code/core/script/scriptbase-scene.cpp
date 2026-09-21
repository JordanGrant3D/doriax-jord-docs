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
    // getScene() returns the protected `scene` member set by the constructor.
    Scene* cachedScene = getScene();
    if (cachedScene == nullptr) {
        Log::print("script view loaded without a scene");
        return;
    }
    Log::print("script view loaded with scene ready");
}

void testerScript::onUpdate() {
    if (!isActive) return;

    // Every frame runs against the same protected `scene` handle.
    Object obj(getScene(), getEntity());
    obj.setPosition(obj.getPosition() + Vector3(0.0f, 0.0f, -moveSpeed * Engine::getDeltatime()));
    Log::print("drifting forward in script scene");
}
