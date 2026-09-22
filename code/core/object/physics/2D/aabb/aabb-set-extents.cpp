#include "testerScript.h"
#include "AABB.h"
#include "Log.h"

#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    AABB box;

    // Set both extents at once with two corners.
    box.setExtents(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));
    Log::print(("size: " + box.getSize().toString()).c_str());

    // Same result with six floats: min (mx, my, mz), max (Mx, My, Mz).
    box.setExtents(-2.0f, -2.0f, -2.0f, 2.0f, 2.0f, 2.0f);
    Log::print(("size: " + box.getSize().toString()).c_str());
}
