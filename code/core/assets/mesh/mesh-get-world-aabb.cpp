#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Mesh mesh(getScene(), getEntity());
    AABB world = mesh.getWorldAABB();
    (void)world;
    (void)detailDistance;
    Log::print("world bounds checked for LOD");
}
