#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Vector add: nudge the cursor by a fixed UI offset.
    Vector2 nudged = mousePos + Vector2(8.0f, -8.0f);

    // Scalar add: apply uniform padding to both axes (tweak live via padOffset).
    Vector2 padded = mousePos + padOffset;

    // Unary plus: explicit no-op copy.
    Vector2 same = +mousePos;

    Log::print(("nudged: " + nudged.toString()).c_str());
    Log::print(("padded: " + padded.toString()).c_str());
    (void)same;
}
