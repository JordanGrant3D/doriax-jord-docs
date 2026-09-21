#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    // Channel 1 = walk, matching CharacterController's desiredAnimState == 1.
    blendWeights = Vector4::UNIT_Y;
}

void testerScript::onUpdate() {
    Log::print(("blend weights: " + blendWeights.toString()).c_str());
}
