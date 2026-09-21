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

    // Bit-exact check only: use equals() for real arrival tests.
    Quaternion target;
    target.fromAngleAxis(targetYaw, Vector3::UNIT_Y);

    // Bit-exact check only: use equals() for real arrival tests.
    if (obj.getRotation() == target) {
        Log::print("rotation exactly matches target");
    }
}
