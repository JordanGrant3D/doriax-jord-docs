#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Matrix3 yaw = Matrix3::rotateYMatrix(yawDegrees);

    // World offset -> character-local offset for strafe-relative logic.
    Vector3 worldOffset = obj.getPosition() - Vector3::ZERO;
    Vector3 localOffset = yaw.inverse(tolerance) * worldOffset;

    Log::print(("local offset: " + localOffset.toString()).c_str());
}
