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

    // -yaw rotates identically; dot() proves the flip with a -1 similarity.
    Quaternion flipped = -yaw;
    float similarity = yaw.dot(flipped);

    Log::print(("flipped similarity: " + std::to_string(similarity)).c_str());
}
