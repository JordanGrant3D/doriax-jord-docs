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
    Log::print("shift-to-sprint ready");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    float speed = moveSpeed;
    int mods = Input::getModifiers();
    if ((mods & D_MODIFIER_SHIFT) != 0) {
        speed *= sprintMultiplier;
        Log::print("sprinting with shift held");
    }
    if (Input::isKeyPressed(D_KEY_W)) {
        Vector3 pos = player.getPosition();
        pos.z -= speed * Engine::getDeltatime();
        player.setPosition(pos);
    }
}
