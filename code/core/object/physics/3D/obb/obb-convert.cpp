#include "testerScript.h"
#include "OBB.h"
#include "AABB.h"
#include "Matrix4.h"
#include "Quaternion.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    OBB box(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));
    box.setOrientation(Quaternion(0.0f, 45.0f, 0.0f));

    // Re-fit to axis-aligned for broadphase checks.
    AABB flat = box.toAABB();
    Log::print(("aabb center: " + flat.getCenter().toString()).c_str());

    // Pack center, orientation, and extents into a matrix for rendering.
    Matrix4 mat = box.toMatrix();
    Log::print(("matrix: " + mat.toString()).c_str());
}
