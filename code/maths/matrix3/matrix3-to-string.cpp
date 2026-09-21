#include "testerScript.h"

#include "Matrix3.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix3 yaw = Matrix3::rotateYMatrix(yawDegrees);

    std::string label = yaw.toString();
    Log::print(label.c_str());
}
