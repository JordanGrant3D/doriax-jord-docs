#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (lockerExit) {
        getScene()->getSystem<MeshSystem>()->removeInstancedMesh(getEntity());
    }
    Log::print("helmet rack instancing released");
}
