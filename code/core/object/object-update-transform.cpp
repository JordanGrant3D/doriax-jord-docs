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
    Object obj(getScene(), getEntity());
    obj.setPosition(0.0f, 1.0f, 0.0f);
    obj.updateTransform();
    Vector3 world = obj.getWorldPosition();
    Log::print("world transform refreshed");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    obj.setPosition(dropHeight, 0.0f, 0.0f);
    obj.updateTransform();
    Vector3 world = obj.getWorldPosition();
    Log::print("world position updated");
}
