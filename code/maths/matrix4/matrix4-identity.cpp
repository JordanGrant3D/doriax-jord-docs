#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    // Fresh frame state, like CharacterController's per-frame inputDir reset.
    pose.identity();
}

void testerScript::onUpdate() {
    // Rebuild from scratch every frame so transforms never accumulate drift.
    pose.identity();
    pose *= Matrix4::translateMatrix(10.0f, 0.0f, 6.0f);

    Log::print(("pose: " + pose.toString()).c_str());
}
