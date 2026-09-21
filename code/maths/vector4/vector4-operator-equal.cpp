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
    // Ease toward the target pose, then confirm exact arrival.
    blendWeights = blendWeights + (targetPose - blendWeights) * 0.1f;

    if (blendWeights == targetPose) {
        Log::print("blend pose reached exactly");
    }
}
