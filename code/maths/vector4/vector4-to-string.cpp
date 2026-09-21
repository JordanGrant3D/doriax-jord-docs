#include "testerScript.h"

#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Example: "Vector4(0.000000, 1.000000, 0.000000, 0.000000)".
    std::string label = blendWeights.toString();
    Log::print(label.c_str());
}
