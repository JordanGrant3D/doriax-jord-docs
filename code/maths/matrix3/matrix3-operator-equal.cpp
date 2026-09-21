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
    tuned = Matrix3::rotateYMatrix(45.0f);
}

void testerScript::onUpdate() {
    Matrix3 live = Matrix3::rotateYMatrix(yawDegrees);

    if (live == tuned) {
        Log::print("live yaw matches the tuned pose");
    }
}
