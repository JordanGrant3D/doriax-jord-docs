#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    TerrainComponent& terrain = getComponent<TerrainComponent>();
    MeshComponent& mesh = getComponent<MeshComponent>();
    Transform& xf = getComponent<Transform>();
    (void)moundHeight;
    if (!getScene()->getSystem<MeshSystem>()->createOrUpdateTerrain(terrain, mesh, xf)) {
        Log::print("pitch rebuild deferred");
        return;
    }
    Log::print("pitch terrain rebuilt");
}
