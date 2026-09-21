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
    if (getEntity() == NULL_ENTITY) {
        Log::print("getEntity returned null entity");
        return;
    }
    Log::print("getEntity returned attached entity");
}

void testerScript::onUpdate() {
    if (!isActive) return;

    Entity self = getEntity();
    if (self == NULL_ENTITY) {
        Log::print("script has no entity to move");
        return;
    }

    Object obj(getScene(), self);
    obj.setPosition(obj.getPosition() + Vector3(0.0f, -fallSpeed * Engine::getDeltatime(), 0.0f));
    Log::print("lowering entity from getEntity");
}
