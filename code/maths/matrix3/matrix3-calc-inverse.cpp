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
    Matrix3 undo;

    if (yaw.calcInverse(undo, tolerance)) {
        Vector3 local = undo * obj.getPosition();
        Log::print(("local pos: " + local.toString()).c_str());
    } else {
        Log::print("yaw matrix singular, cannot invert");
    }
}
