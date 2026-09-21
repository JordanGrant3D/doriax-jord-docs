#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Same stacking order CharacterController uses for camRot: yaw, then pitch.
    Matrix3 orientation;
    orientation *= Matrix3::rotateYMatrix(yawDegrees);
    orientation *= Matrix3::rotateXMatrix(pitchDegrees);

    Log::print(("orientation: " + orientation.toString()).c_str());
}
