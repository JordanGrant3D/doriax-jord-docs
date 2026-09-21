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

    // Forward-column, X-row: zero when facing straight down -Z.
    float strafe = yaw.get(2, 0);

    Log::print(("strafe component: " + std::to_string(strafe)).c_str());
}
