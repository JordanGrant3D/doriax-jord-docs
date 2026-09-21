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
    if (newSeason) {
        getScene()->getSystem<MeshSystem>()->clearAnimationMapping(model);
    }
    Log::print("animation mapping cleared");
}
