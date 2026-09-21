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

    Quaternion target;
    target.fromAngleAxis(targetYaw, Vector3::UNIT_Y);

    // Component gap driving a manual ease toward the target facing.
    Quaternion gap = target - obj.getRotation();

    Log::print(("gap w: " + std::to_string(gap.w)).c_str());
}
