#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Quaternion yaw, lean;
    yaw.fromAngleAxis(yawDegrees, Vector3::UNIT_Y);
    lean.fromAngleAxis(leanDegrees, Vector3::UNIT_Z);

    // Lean applies first, then yaw carries it around.
    Quaternion pose = yaw * lean;
    Vector3 forward = pose * Vector3(0.0f, 0.0f, -1.0f);

    Log::print(("posed forward: " + forward.toString()).c_str());
}
