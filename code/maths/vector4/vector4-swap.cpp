#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
}

void testerScript::onUpdate() {
    // Build the next pose in blendB, then swap it live with SPACE.
    if (Input::isKeyPressed(D_KEY_SPACE)) {
        blendA.swap(blendB);
        Log::print(("swapped to: " + blendA.toString()).c_str());
    }
}
