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

    float dist = crate.distance(targetPoint);
    float sqDist = crate.squaredDistance(targetPoint);
    Log::print(("distance to crate: " + std::to_string(dist)).c_str());
    Log::print(("squared distance to crate: " + std::to_string(sqDist)).c_str());

    float insideDist = crate.distance(insidePoint);
    Log::print(("distance from inside: " + std::to_string(insideDist)).c_str());
}
