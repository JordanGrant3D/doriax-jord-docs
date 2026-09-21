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
    // getEntity() returns the protected `entity` member set by the constructor.
    Entity self = getEntity();
    if (self == NULL_ENTITY) {
        Log::print("script view loaded without an entity");
        return;
    }
    Log::print("script view loaded on attached entity");
}

void testerScript::onUpdate() {
    if (!isActive) return;

    // Drive the attached `entity` handle upward every frame.
    Object obj(getScene(), getEntity());
    obj.setPosition(obj.getPosition() + Vector3(0.0f, riseSpeed * Engine::getDeltatime(), 0.0f));
    Log::print("rising attached entity");
}
