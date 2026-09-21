#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    // Fresh frame state, like CharacterController's per-frame inputDir reset.
    orientation.identity();
}

void testerScript::onUpdate() {
    // Rebuild from scratch every frame so yaw never accumulates drift.
    orientation.identity();
    orientation *= Matrix3::rotateYMatrix(45.0f);

    Log::print(("orientation: " + orientation.toString()).c_str());
}
