#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    chaser = Vector2::ZERO;
}

void testerScript::onUpdate() {
    Vector2 target = Input::getMousePosition();

    chaser = chaser.moveTowards(target, chaseSpeed * Engine::getDeltatime());
    Log::print(("chaser: " + chaser.toString()).c_str());
}
