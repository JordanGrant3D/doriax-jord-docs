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
    // Fresh weights every frame, mirroring how CharacterController recomputes
    // desiredAnimState (0 idle, 1 walk, 2 jump, 3 waiting) each update.
    blendWeights = Vector4::ZERO;
    blendWeights[0] = 1.0f;

    Log::print(("blend weights: " + blendWeights.toString()).c_str());
}
