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

    // World push -> character-local push for strafe-relative knockback.
    Vector3 worldPush = push;
    Vector3 localPush = obj.getRotation().inverse() * worldPush;

    Log::print(("local push: " + localPush.toString()).c_str());
}
