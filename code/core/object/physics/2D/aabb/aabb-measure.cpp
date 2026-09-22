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
    AABB crate(crateMin, crateMax);

    Vector3 center = crate.getCenter();
    Vector3 size = crate.getSize();
    Vector3 halfSize = crate.getHalfSize();

    Log::print(("center: " + center.toString()).c_str());
    Log::print(("size: " + size.toString()).c_str());
    Log::print(("half size: " + halfSize.toString()).c_str());
}
