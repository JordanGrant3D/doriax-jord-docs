#include "testerScript.h"

#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Free in release builds: the call vanishes under NDEBUG.
    if (checkPosition && !obj.getPosition().isValid()) {
        Log::debug("character position went non-finite");
    }
}
