#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Forward is -Z in this engine's convention.
    Vector3 forward = obj.getRotation().zAxis() * -1.0f;

    if (showAxis) Log::print(("forward: " + forward.toString()).c_str());
}
