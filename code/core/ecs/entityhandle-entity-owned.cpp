#include "testerScript.h"

#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object ally(getScene(), getEntity());

    // Observe the ally without taking over its lifetime unless requested.
    ally.setEntityOwned(takeOwnership);

    if (ally.isEntityOwned()) {
        Log::print("ally entity owned by this handle");
    } else {
        Log::print("ally entity observed only");
    }
}
