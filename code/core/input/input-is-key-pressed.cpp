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
    Log::print("character controller ready, move with WASD");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    Vector3 pos = player.getPosition();
    float step = moveSpeed * Engine::getDeltatime();

    if (Input::isKeyPressed(D_KEY_W)) {
        pos.z -= step;
    }
    if (Input::isKeyPressed(D_KEY_S)) {
        pos.z += step;
    }
    if (Input::isKeyPressed(D_KEY_A)) {
        pos.x -= step;
    }
    if (Input::isKeyPressed(D_KEY_D)) {
        pos.x += step;
    }
    if (Input::isKeyPressed(jumpKey)) {
        pos.y += step;
        Log::print("jump key pressed");
    }
    player.setPosition(pos);
}
