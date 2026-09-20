#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 stick(Input::getMousePosition().x * 0.001f, Input::getMousePosition().y * 0.001f);

    if (stick.length() > moveDeadzone) {
        stick.normalize();
        Log::print(("aim dir: " + stick.toString()).c_str());
    } else {
        Log::print("stick inside deadzone");
    }
}
