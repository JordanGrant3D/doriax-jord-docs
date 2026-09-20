#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Vertical mouse component steers pitch, as in CharacterController.
    float yoffset = mousePos.y;
    camPitch -= yoffset * mouseSensitivity;

    if (camPitch > 89.0f) camPitch = 89.0f;
    if (camPitch < -89.0f) camPitch = -89.0f;

    Log::print(("camPitch: " + std::to_string(camPitch)).c_str());
}
