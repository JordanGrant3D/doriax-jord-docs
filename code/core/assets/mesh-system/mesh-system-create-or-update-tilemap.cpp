#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    TilemapComponent& tilemap = getComponent<TilemapComponent>();
    MeshComponent& mesh = getComponent<MeshComponent>();
    (void)formationRows;
    if (!getScene()->getSystem<MeshSystem>()->createOrUpdateTilemap(tilemap, mesh)) {
        Log::print("formation grid rebuild deferred");
        return;
    }
    Log::print("formation grid rebuilt");
}
