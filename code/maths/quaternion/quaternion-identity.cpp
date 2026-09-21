#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    obj.setRotation(Quaternion::IDENTITY);
}

void testerScript::onUpdate() {
    if (resetOnUpdate) {
        Object obj(getScene(), getEntity());
        obj.setRotation(Quaternion::IDENTITY);
    }

    Log::print("rotation reset to identity");
}
