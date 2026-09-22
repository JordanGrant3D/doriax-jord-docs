#include "testerScript.h"
using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    AABB crate(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));

    Log::print(("size before: " + crate.getSize().toString()).c_str());
    crate.scale(Vector3(2.0f, 2.0f, 2.0f));
    Log::print(("size after: " + crate.getSize().toString()).c_str());
}
