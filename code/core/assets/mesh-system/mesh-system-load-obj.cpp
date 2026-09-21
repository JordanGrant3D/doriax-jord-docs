#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    if (!getScene()->getSystem<MeshSystem>()->loadOBJ(getEntity(), bootsFile)) {
        Log::print("boots OBJ failed");
        return;
    }
    Log::print("boots OBJ loading");
}
