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
    Log::print("aim reticle ready");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    Vector2 cursor = Input::getMousePosition();
    Vector3 pos = player.getPosition();
    pos.x += (cursor.x - pos.x) * aimSpeed * Engine::getDeltatime();
    player.setPosition(pos);
    Log::print("aiming at cursor x=%.1f y=%.1f", cursor.x, cursor.y);
}
