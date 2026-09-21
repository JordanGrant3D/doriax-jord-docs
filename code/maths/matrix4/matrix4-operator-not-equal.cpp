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
    lastPose = Matrix4::rotateYMatrix(yawDegrees);
}

void testerScript::onUpdate() {
    Matrix4 live = Matrix4::rotateYMatrix(yawDegrees);

    // Same idea as CharacterController's anim-state switch: only react on change.
    if (live != lastPose) {
        Log::print("pose changed, refreshing spawn data");
        lastPose = live;
    }
}
