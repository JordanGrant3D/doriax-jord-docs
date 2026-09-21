#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (getScene()->getSystem<MeshSystem>()->isAsyncModelLoadPending(getEntity(), awayKit)) {
        Log::print("away kit still streaming");
        return;
    }
    Log::print("away kit ready");
}
