#include "testerScript.h"

#include "Matrix4.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 pose = Matrix4::rotateYMatrix(yawDegrees);

    std::string label = pose.toString();
    Log::print(label.c_str());
}
