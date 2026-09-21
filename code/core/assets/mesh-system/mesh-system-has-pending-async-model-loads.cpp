#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (loadingIcon && getScene()->getSystem<MeshSystem>()->hasPendingAsyncModelLoads()) {
        Log::print("kits still streaming");
        return;
    }
    Log::print("all kits ready");
}
