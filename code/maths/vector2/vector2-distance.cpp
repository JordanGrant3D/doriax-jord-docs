#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();
    if (firstMouse) {
        lastMousePos = mousePos;
        firstMouse = false;
    }

    float travel = mousePos.distance(lastMousePos);
    if (travel > flickThreshold) {
        Log::print(("mouse flick: " + std::to_string(travel)).c_str());
    }
    lastMousePos = mousePos;
}
