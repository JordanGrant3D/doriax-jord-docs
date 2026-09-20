#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Pixels -> 0..1 UV space via component-wise division.
    Vector2 uv = mousePos / screenSize;

    // Scalar division: damp the raw reading toward zero.
    Vector2 damped = mousePos / 2.0f;

    Log::print(("uv: " + uv.toString()).c_str());
    (void)damped;
}
