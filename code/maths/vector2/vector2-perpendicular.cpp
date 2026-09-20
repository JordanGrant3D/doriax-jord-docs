#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    dotPosition = Vector2::ZERO;
}

void testerScript::onUpdate() {
    Vector2 drag(Input::getMousePosition().x * 0.001f, 0.0f);

    // Slide a minimap dot sideways to the drag direction.
    Vector2 side = drag.perpendicular();
    dotPosition = dotPosition + side * (strafeSpeed * Engine::getDeltatime());

    Log::print(("dot: " + dotPosition.toString()).c_str());
}
