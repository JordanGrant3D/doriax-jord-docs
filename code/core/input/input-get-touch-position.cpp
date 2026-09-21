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
    Log::print("touch follow ready");
}

void testerScript::onUpdate() {
    if (!Input::isTouch()) {
        return;
    }
    Object player(getScene(), getEntity());
    Vector2 finger = Input::getTouchPosition(touchPointer);
    Vector3 pos = player.getPosition();
    pos.x += (finger.x - pos.x) * touchMoveSpeed * Engine::getDeltatime();
    player.setPosition(pos);
    Log::print("following touch x=%.1f y=%.1f", finger.x, finger.y);
}
