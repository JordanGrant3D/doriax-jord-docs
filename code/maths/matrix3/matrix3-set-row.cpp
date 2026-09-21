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

    // Steer the forward row toward the live-tuned aim direction.
    pose.setRow(2, aim.normalized());

    Log::print(("pose: " + pose.toString()).c_str());
}
