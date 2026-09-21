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

    // log() inverts exp(): the axis part scaled by the half angle.
    Quaternion twist = yaw.log();

    Log::print(("twist: " + twist.toString()).c_str());
}
