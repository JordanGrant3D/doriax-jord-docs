#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // One matrix that moves to the spawn point, then faces along yaw.
    Matrix4 pose = Matrix4::translateMatrix(spawn) * Matrix4::rotateYMatrix(yawDegrees);
    Vector3 forward = pose * Vector3(0.0f, 0.0f, -1.0f);

    Log::print(("spawn forward: " + forward.toString()).c_str());
}
