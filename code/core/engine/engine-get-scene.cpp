#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Scene* scene = Engine::getScene();
    Object player(getScene(), getEntity());
    player.setName(tag);
    Log::print("main scene: %s player: %s", scene != nullptr ? "set" : "none", player.getName().c_str());
}
