#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (blendWeights > activationFloor) {
        Log::print("all four blend channels active");
    } else {
        Log::print("a blend channel dropped out");
    }
}
