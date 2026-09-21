#include "testerScript.h"

#include <string>
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Entity self = getEntity();
    Object player(getScene(), self);
    player.setName(otherTag);

    if (self != NULL_ENTITY) {
        Log::print("tracking player entity: " + std::to_string(self));
    } else {
        Log::print("player entity invalid");
    }
}
