#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 raw(Input::getMousePosition().x * 0.001f, Input::getMousePosition().y * 0.001f);

    // normalized() preserves raw, so the deflection test below still works.
    Vector2 dir = raw.normalized();
    if (raw.length() > 0.2f) {
        Log::print(("aim dir: " + dir.toString()).c_str());
    }
    (void)aimDirection;
}
