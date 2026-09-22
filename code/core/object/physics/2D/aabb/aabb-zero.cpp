#include "testerScript.h"
#include "AABB.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Start from a valid all-zeros box, then grow it to fit each point.
    AABB bounds = AABB::ZERO;
    bounds.merge(firstPoint);
    bounds.merge(secondPoint);

    Log::print(("bounds center: " + bounds.getCenter().toString()).c_str());
    Log::print(("bounds size: " + bounds.getSize().toString()).c_str());
}
