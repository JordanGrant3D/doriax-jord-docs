#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    ModelComponent& model = getComponent<ModelComponent>();
    MeshComponent& mesh = getComponent<MeshComponent>();
    (void)homeKit;
    if (!getScene()->getSystem<MeshSystem>()->createOrUpdateModel(getEntity(), model, mesh)) {
        Log::print("home kit apply deferred");
        return;
    }
    Log::print("home kit applied");
}
