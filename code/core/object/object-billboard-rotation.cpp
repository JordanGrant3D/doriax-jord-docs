#include "testerScript.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    obj.setBillboard(true);
    obj.setBillboardRotation(0.0f, rotationY, 0.0f);
    Log::print("billboard rotation set");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    obj.setBillboardRotation(0.0f, rotationY, 0.0f);
    Quaternion rotation = obj.getBillboardRotation();
    (void)rotation;
    Log::print("billboard rotation read");
}
