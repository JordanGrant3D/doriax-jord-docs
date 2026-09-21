#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    TerrainComponent& terrain = getComponent<TerrainComponent>();
    Transform& xf = getComponent<Transform>();
    Ray ray;
    Vector3 hit;
    if (!getScene()->getSystem<MeshSystem>()->raycastTerrainSurface(ray, terrain, xf, hit)) {
        Log::print("terrain pick missed");
        return;
    }
    markerHeight = hit.y;
    Log::print("coach marker placed");
}
