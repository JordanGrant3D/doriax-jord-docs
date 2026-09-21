#include "testerScript.h"

#include "Plane.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
}

void testerScript::onUpdate() {
    Plane ground(floorNormal, 0.0f);

    // Same idea as CharacterController's anim-state switch: only react on change.
    if (ground != lastGround) {
        Log::print("ground plane changed, retuning slope helpers");
        lastGround = ground;
    }
}
