#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Horizontal mouse component steers yaw, as in CharacterController.
    float xoffset = mousePos.x;
    camYaw -= xoffset * mouseSensitivity;

    Log::print(("camYaw: " + std::to_string(camYaw)).c_str());
}
