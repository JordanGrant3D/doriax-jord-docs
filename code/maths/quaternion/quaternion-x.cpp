#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    lean = Quaternion::IDENTITY;
    lean.fromAngleAxis(10.0f, Vector3(1.0f, 0.0f, 0.0f));

    Log::print(("lean x: " + std::to_string(lean.x)).c_str());
}
