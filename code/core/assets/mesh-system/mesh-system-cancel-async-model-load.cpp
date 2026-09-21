#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    getScene()->getSystem<MeshSystem>()->cancelAsyncModelLoad(getEntity(), thirdKit);
    Log::print("third kit load cancelled");
}
