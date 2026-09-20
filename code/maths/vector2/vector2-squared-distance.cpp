#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Cheaper than distance(): no square root in this per-frame check.
    float r2 = snapRadius * snapRadius;
    if (mousePos.squaredDistance(snapTarget) <= r2) {
        Log::print("cursor snapped to target");
    }
}
