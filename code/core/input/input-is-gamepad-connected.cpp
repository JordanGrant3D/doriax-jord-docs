#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Log::print("gamepad controller ready");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    if (!Input::isGamepadConnected(gamepadId)) {
        return;
    }
    if (Input::isKeyPressed(D_KEY_W)) {
        Vector3 pos = player.getPosition();
        pos.z -= moveSpeed * Engine::getDeltatime();
        player.setPosition(pos);
        Log::print("gamepad present, keyboard fallback move");
    }
}
