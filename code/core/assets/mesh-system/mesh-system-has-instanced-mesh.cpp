#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (lodCheck && !getScene()->getSystem<MeshSystem>()->hasInstancedMesh(getEntity())) {
        Log::print("rack instancing missing");
        return;
    }
    Log::print("rack instancing present");
}
