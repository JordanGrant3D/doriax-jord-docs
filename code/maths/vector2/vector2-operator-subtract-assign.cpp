#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 stick(Input::getMousePosition().x * 0.001f, Input::getMousePosition().y * 0.001f);

    // Pull the reading back toward the calibrated centre, then shave the deadzone.
    stick -= recenter;
    stick -= deadzone;

    Log::print(("stick: " + stick.toString()).c_str());
}
