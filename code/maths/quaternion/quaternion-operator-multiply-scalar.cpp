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
    yaw.fromAngleAxis(90.0f, Vector3::UNIT_Y);

    // Both orders work; renormalize before using as a rotation.
    Quaternion a = yaw * weight;
    Quaternion b = weight * yaw;
    a.normalize();

    Log::print(("weighted: " + a.toString()).c_str());
    (void)b;
}
