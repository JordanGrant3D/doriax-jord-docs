#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Matrix4 pose = Matrix4::translateMatrix(obj.getPosition()) * Matrix4::rotateYMatrix(yawDegrees);

    // Recover the character's position and scale back out of the matrix.
    Vector3 position, scale;
    Quaternion rotation;
    pose.decomposeStandard(position, scale, rotation);

    Log::print(("recovered pos: " + position.toString()).c_str());
    Log::print(("recovered scale: " + scale.toString()).c_str());
}
