#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Same -30 default CharacterController uses for camPitch.
    Matrix4 pitch = Matrix4::rotateXMatrix(pitchDegrees);
    Vector3 gaze = pitch * Vector3(0.0f, 0.0f, -1.0f);

    Log::print(("gaze: " + gaze.toString()).c_str());
}
