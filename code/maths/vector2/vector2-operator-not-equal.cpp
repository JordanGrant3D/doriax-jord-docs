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

    if (mousePos != lastMousePos) {
        float xoffset = mousePos.x - lastMousePos.x;
        camYaw -= xoffset * mouseSensitivity;
        Log::print(("camYaw: " + std::to_string(camYaw)).c_str());
    }
    lastMousePos = mousePos;
}
