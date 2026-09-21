#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    AABB crate(Vector3(4.0f, 0.0f, -1.0f), Vector3(6.0f, 2.0f, 1.0f));

    // Ride the crate up with the moving platform matrix.
    AABB lifted = Matrix4::translateMatrix(platformOffset) * crate;

    Log::print(("lifted centre: " + lifted.getCenter().toString()).c_str());
}
