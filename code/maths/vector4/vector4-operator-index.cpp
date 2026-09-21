#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    blendWeights = Vector4::ZERO;
}

void testerScript::onUpdate() {
    // CharacterController picks desiredAnimState 0..3; map it straight onto
    // the matching blend channel via the index operator.
    int clamped = animState;
    if (clamped < 0) clamped = 0;
    if (clamped > 3) clamped = 3;

    blendWeights = Vector4::ZERO;
    blendWeights[clamped] = 1.0f; // non-const overload: write through the index

    float active = blendWeights[clamped]; // const overload: read back
    Log::print(("active weight: " + std::to_string(active)).c_str());
}
