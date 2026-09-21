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

    // YXZ matches how the rotation was built; y carries the compass yaw.
    Vector3 euler = obj.getRotation().getEulerAngles(RotationOrder::YXZ);

    Log::print(("compass yaw: " + std::to_string(euler.y * displayScale)).c_str());
}
