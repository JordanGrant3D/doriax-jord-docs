#include "testerScript.h"
#include "AABB.h"
#include "OBB.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Convert the axis-aligned trigger volume for a rotation-aware query.
    OBB obb = box.getOBB();

    Log::print(("obb center: " + obb.getCenter().toString()).c_str());
}
