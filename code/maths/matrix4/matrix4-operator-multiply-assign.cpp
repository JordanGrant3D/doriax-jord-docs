#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 pose;
    pose *= Matrix4::translateMatrix(spawn);
    pose *= Matrix4::rotateYMatrix(yawDegrees);

    Log::print(("pose: " + pose.toString()).c_str());
}
