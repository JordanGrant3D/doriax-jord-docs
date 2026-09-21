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
    Log::print("scroll zoom ready");
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    Vector2 scroll = Input::getMouseScroll();
    if (scroll.y != 0.0f) {
        Vector3 pos = player.getPosition();
        pos.y += scroll.y * zoomSpeed * Engine::getDeltatime();
        player.setPosition(pos);
        Log::print("zooming with scroll y=%.1f", scroll.y);
    }
}
