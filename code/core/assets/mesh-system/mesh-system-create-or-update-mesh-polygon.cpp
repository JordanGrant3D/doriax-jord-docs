#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    MeshPolygonComponent& polygon = getComponent<MeshPolygonComponent>();
    MeshComponent& mesh = getComponent<MeshComponent>();
    (void)starPoints;
    if (!getScene()->getSystem<MeshSystem>()->createOrUpdateMeshPolygon(polygon, mesh)) {
        Log::print("star badge rebuild deferred");
        return;
    }
    Log::print("star badge rebuilt");
}
