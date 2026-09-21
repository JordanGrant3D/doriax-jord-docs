#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Quaternion needle;
    needle.fromAngle(needleDegrees);

    Vector3 tip = needle * Vector3(1.0f, 0.0f, 0.0f);

    Log::print(("needle tip: " + tip.toString()).c_str());
}
