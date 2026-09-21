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

    // Row 2 carries the forward axis of the yawed pose.
    Vector4 forwardRow = yaw.row(2);

    Log::print(("forward row: " + forwardRow.toString()).c_str());
}
