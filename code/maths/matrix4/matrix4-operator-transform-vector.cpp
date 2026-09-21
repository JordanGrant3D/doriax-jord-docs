#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 yaw = Matrix4::rotateYMatrix(yawDegrees);

    // w == 0 marks a direction: translation passes through untouched.
    Vector4 dir = yaw * Vector4(0.0f, 0.0f, -1.0f, 0.0f);

    Log::print(("dir: " + dir.toString()).c_str());
}
