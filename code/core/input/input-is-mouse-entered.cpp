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
    Log::print("character highlight ready");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    Vector3 pos = player.getPosition();
    if (Input::isMouseEntered()) {
        pos.y = hoverHeight;
        player.setPosition(pos);
        Log::print("cursor inside canvas, highlight on");
    } else {
        Log::print("cursor left the canvas, highlight off");
    }
}
