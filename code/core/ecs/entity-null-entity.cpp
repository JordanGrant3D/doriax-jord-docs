#include "testerScript.h"

#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (target == NULL_ENTITY) {
        Log::print("no target entity selected");
        return;
    }

    Object picked(getScene(), target);
    Log::print("target entity: " + picked.getName());
}
