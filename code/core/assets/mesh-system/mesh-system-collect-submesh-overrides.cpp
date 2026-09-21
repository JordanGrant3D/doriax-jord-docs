#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    ModelComponent& model = getComponent<ModelComponent>();
    MeshSystem::SubmeshOverrides saved = getScene()->getSystem<MeshSystem>()->collectSubmeshOverrides(Entity(kitSlot), model);
    (void)saved;
    Log::print("armor overrides collected");
}
