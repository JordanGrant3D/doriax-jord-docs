#include "testerScript.h"

#include "Log.h"
#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Quaternion target;
    target.fromAngleAxis(targetYaw, Vector3::UNIT_Y);

    if (obj.getRotation().equals(target)) {
        Log::print("turn complete");
    }
}
