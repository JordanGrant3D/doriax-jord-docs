#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    facing = obj.getRotation();
    staged.fromAngleAxis(altYaw, Vector3::UNIT_Y);
}

void testerScript::onUpdate() {
    // Stage the about-face, then swap it live with SPACE.
    if (Input::isKeyPressed(D_KEY_SPACE)) {
        facing.swap(staged);
        Log::print(("swapped to: " + facing.toString()).c_str());
    }
}
