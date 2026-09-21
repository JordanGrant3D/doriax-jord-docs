#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Local muzzle offset carried into world space by the spawn pose.
    Matrix4 pose = Matrix4::translateMatrix(spawn) * Matrix4::rotateYMatrix(yawDegrees);
    Vector3 muzzle = pose * Vector3(0.0f, 1.5f, -1.0f);

    Log::print(("muzzle: " + muzzle.toString()).c_str());
}
