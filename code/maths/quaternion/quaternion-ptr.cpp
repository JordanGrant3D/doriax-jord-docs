#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Quaternion yaw;
    yaw.fromAngleAxis(yawDegrees, Vector3::UNIT_Y);

    // Writable upload path.
    float* raw = yaw.ptr();

    // Read-only path through a const reference.
    const Quaternion& frozen = yaw;
    const float* readOnly = frozen.ptr();

    Log::print(("w: " + std::to_string(raw[0]) + " / " + std::to_string(readOnly[0])).c_str());
}
