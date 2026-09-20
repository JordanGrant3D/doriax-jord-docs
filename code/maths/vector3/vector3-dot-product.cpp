#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
}

void testerScript::onUpdate() {
    Vector3 toTarget(0, 0, -5);
    toTarget.normalize();

    // 1.0 == directly ahead, 0.0 == to the side, -1.0 == behind.
    float facingAmount = facing.dotProduct(toTarget);
    Log::print(std::to_string(facingAmount).c_str());
}
