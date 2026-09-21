#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // One matrix that yaws the character then leans it into the turn.
    Matrix3 pose = Matrix3::rotateYMatrix(yawDegrees) * Matrix3::rotateZMatrix(leanDegrees);
    Vector3 forward = pose * Vector3(0.0f, 0.0f, -1.0f);

    Log::print(("posed forward: " + forward.toString()).c_str());
}
