#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 stick(Input::getMousePosition().x * 0.001f, Input::getMousePosition().y * 0.001f);

    // stick becomes the direction; deflection keeps the original magnitude.
    float deflection = stick.normalizeL();
    if (deflection > moveDeadzone) {
        Log::print(("aim dir: " + stick.toString()).c_str());
    }
}
