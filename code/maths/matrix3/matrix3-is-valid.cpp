#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix3 yaw = Matrix3::rotateYMatrix(yawDegrees);

    // Never transform the move axes with a NaN/inf matrix: hold identity.
    if (!yaw.isValid()) {
        Log::print("yaw matrix invalid, holding identity");
        yaw.identity();
        return;
    }

    Log::print(("yaw ok: " + yaw.toString()).c_str());
}
