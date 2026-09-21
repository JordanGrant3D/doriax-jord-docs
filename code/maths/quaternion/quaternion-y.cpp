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

    // Pure yaw spin: only w and y move.
    Log::print(("yaw y: " + std::to_string(yaw.y)).c_str());
}
