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
    Log::print("character controller ready, touch to steer on mobile");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    if (Input::isTouch()) {
        Vector3 pos = player.getPosition();
        pos.x += touchMoveSpeed * Engine::getDeltatime();
        player.setPosition(pos);
        Log::print("touch steering active");
    }
}
