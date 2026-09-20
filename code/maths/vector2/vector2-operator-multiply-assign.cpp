#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 look = Input::getMousePosition();

    // Shape the feel in place: per-axis first, then the global multiplier.
    look *= axisSensitivity;
    look *= lookSensitivity;

    Log::print(("look: " + look.toString()).c_str());
}
