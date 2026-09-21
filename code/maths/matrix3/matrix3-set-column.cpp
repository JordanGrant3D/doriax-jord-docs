#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    pose.identity();

    // Tilt the up basis sideways; tune lean live while strafing.
    pose.setColumn(1, lean.normalized());

    Log::print(("pose: " + pose.toString()).c_str());
}
