#include "testerScript.h"
#include "Log.h"
#include <cstddef>
#include <vector>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Log::print("touch pointer tracking ready");
}

void testerScript::onUpdate() {
    size_t index = Input::findTouchIndex(touchPointer);
    std::vector<Touch> touches = Input::getTouches();
    if (index != SIZE_MAX && index < touches.size()) {
        Object player(getScene(), getEntity());
        Vector3 pos = player.getPosition();
        pos.x += (touches[index].position.x - pos.x) * touchMoveSpeed * Engine::getDeltatime();
        player.setPosition(pos);
        Log::print("tracking touch pointer=%d at index=%u", touchPointer, (unsigned)index);
    }
}
