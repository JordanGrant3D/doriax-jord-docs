#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    pose = Matrix4::rotateYMatrix(45.0f);

    // Teleport the yawed pose to the live spawn via column 3.
    pose.setColumn(3, Vector4(spawn.x, spawn.y, spawn.z, 1.0f));

    Log::print(("pose: " + pose.toString()).c_str());
}
