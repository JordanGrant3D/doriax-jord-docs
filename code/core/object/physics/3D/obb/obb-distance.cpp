#include "testerScript.h"
#include "OBB.h"
#include "Log.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    OBB box(Vector3(-1, -1, -1), Vector3(1, 1, 1));

    float dist = box.distance(targetPoint);
    float sqDist = box.squaredDistance(targetPoint);
    Log::print(("distance to box: " + std::to_string(dist)).c_str());
    Log::print(("squared distance to box: " + std::to_string(sqDist)).c_str());

    float insideDist = box.distance(insidePoint);
    Log::print(("distance from inside: " + std::to_string(insideDist)).c_str());
}
