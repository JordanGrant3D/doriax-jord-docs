#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    MeshComponent& mesh = getComponent<MeshComponent>();
    (void)armbandMorph;
    getScene()->getSystem<MeshSystem>()->calculateMeshAABB(mesh);
    Log::print("mesh bounds recalculated");
}
