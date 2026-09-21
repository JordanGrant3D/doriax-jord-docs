#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Quaternion hand(rawW, rawX, 0.0f, 0.0f);

    // Unit check before trusting it as a rotation.
    Log::print(("norm: " + std::to_string(hand.norm())).c_str());
}
