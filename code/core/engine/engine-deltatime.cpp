#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object player(getScene(), getEntity());
    Vector3 pos = player.getPosition();
    float dt = Engine::getDeltatime();
    Vector3 next = pos + Vector3(moveSpeed * dt, 0.0f, 0.0f);
    player.setPosition(next);
    Log::print("moved with dt %f", dt);
}
