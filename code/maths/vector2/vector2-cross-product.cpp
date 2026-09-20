#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 aim(Input::getMousePosition().x * 0.001f, -1.0f);

    // Positive == turning left, negative == turning right.
    float turn = facing.crossProduct(aim);
    Log::print(("turn: " + std::to_string(turn)).c_str());
}
