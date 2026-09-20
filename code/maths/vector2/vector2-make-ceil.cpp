#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 clamped = Input::getMousePosition();

    // Keep the cursor inside the screen: raise any axis below the minimum.
    clamped.makeCeil(screenMin);

    Log::print(("clamped: " + clamped.toString()).c_str());
}
