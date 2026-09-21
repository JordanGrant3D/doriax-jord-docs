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

    // Mirrors Object::setLocalMatrix decomposing a matrix back into parts.
    Matrix4 pose = Matrix4::translateMatrix(obj.getPosition()) * Matrix4::rotateYMatrix(yawDegrees);

    Vector3 position, scale;
    Quaternion rotation;
    pose.decompose(position, scale, rotation);

    Log::print(("recovered pos: " + position.toString()).c_str());
}
