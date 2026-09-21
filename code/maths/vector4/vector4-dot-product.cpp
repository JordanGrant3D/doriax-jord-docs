#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // 1.0 == identical poses, 0.0 == fully disjoint.
    float similarity = blendWeights.dotProduct(targetPose);
    Log::print(("pose similarity: " + std::to_string(similarity)).c_str());
}
