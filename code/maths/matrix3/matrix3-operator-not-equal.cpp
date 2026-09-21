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
    lastYaw = Matrix3::rotateYMatrix(yawDegrees);
}

void testerScript::onUpdate() {
    Matrix3 live = Matrix3::rotateYMatrix(yawDegrees);

    // Same idea as CharacterController's anim-state switch: only react on change.
    if (live != lastYaw) {
        Log::print("yaw changed, refreshing facing vectors");
        lastYaw = live;
    }
}
