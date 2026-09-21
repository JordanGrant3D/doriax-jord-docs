#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Strafe axis straight out of the live facing (cf. camRight).
    Vector3 right = obj.getRotation().xAxis();

    if (showAxis) Log::print(("right: " + right.toString()).c_str());
}
