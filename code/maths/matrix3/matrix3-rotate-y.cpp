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

    // Sweep the yaw live, then face the forward vector along it.
    yawDegrees += turnSpeed * Engine::getDeltatime();
    if (yawDegrees >= 360.0f) yawDegrees -= 360.0f;

    Matrix3 yaw = Matrix3::rotateYMatrix(yawDegrees);
    Vector3 forward = yaw * Vector3(0.0f, 0.0f, -1.0f);

    obj.setPosition(obj.getPosition() + forward * Engine::getDeltatime());
    Log::print(("forward: " + forward.toString()).c_str());
}
