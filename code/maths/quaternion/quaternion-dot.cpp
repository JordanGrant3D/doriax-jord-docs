#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    current.fromAngleAxis(0.0f, Vector3::UNIT_Y);
}

void testerScript::onUpdate() {
    Quaternion target;
    target.fromAngleAxis(targetYaw, Vector3::UNIT_Y);

    // Turn-progress meter: 1.0 means facing the target.
    float similarity = current.dot(target);

    Log::print(("similarity: " + std::to_string(similarity)).c_str());
}
