#include "testerScript.h"
#include "OBB.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    OBB box(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));

    // Grow the box when the power-up is collected.
    box.setHalfExtents(grownExtents);

    Vector3 half = box.getHalfExtents();
    Log::print("box half extents: %f, %f, %f", half.x, half.y, half.z);
}
