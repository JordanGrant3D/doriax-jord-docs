#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    lastWeights = blendWeights;
}

void testerScript::onUpdate() {
    // Same pattern as CharacterController's anim-state switch: only crossfade
    // the model while the weight set is actually changing.
    if (blendWeights != lastWeights) {
        Log::print(("weights changed: " + blendWeights.toString()).c_str());
        lastWeights = blendWeights;
    }
}
