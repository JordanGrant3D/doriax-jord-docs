#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // w near 1: barely turned. w near 0: nearly flipped around.
    Log::print(("spin w: " + std::to_string(spin.w)).c_str());
}
