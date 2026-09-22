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
    AABB box(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));

    // Grow the box so it also contains the other box.
    AABB other(Vector3(0.0f, 0.0f, 0.0f), Vector3(5.0f, 5.0f, 5.0f));
    box.merge(other);
    Log::print(("merged size: " + box.getSize().toString()).c_str());

    // Grow the box so it also contains a single point.
    box.merge(Vector3(10.0f, 0.0f, 0.0f));
    Log::print(("merged size: " + box.getSize().toString()).c_str());
}
