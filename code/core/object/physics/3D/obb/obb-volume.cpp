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

    Log::print(("box volume: " + std::to_string(box.volume())).c_str());
}
