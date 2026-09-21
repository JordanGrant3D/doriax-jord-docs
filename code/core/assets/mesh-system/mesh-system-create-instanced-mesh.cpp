#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    if (rackReady) {
        getScene()->getSystem<MeshSystem>()->createInstancedMesh(getEntity());
    }
    Log::print("helmet rack instancing created");
}
