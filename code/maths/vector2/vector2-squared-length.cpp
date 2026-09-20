#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 stick(Input::getMousePosition().x * 0.001f, Input::getMousePosition().y * 0.001f);

    // Fast zero-input test without sqrt, then normalize once.
    float dz2 = moveDeadzone * moveDeadzone;
    if (stick.squaredLength() > dz2) {
        stick.normalize();
        Log::print(("aim dir: " + stick.toString()).c_str());
    }
}
