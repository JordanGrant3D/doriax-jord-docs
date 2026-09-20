#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Fresh accumulator every frame, exactly like CharacterController's per-frame inputDir.
    lookDelta = Vector2::ZERO;

    Vector2 mousePos = Input::getMousePosition();
    lookDelta = lookDelta + Vector2(mousePos.x * 0.01f, mousePos.y * 0.01f);

    Log::print(("lookDelta: " + lookDelta.toString()).c_str());
}
