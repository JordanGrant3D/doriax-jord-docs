#include "testerScript.h"

#include "Sphere.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    attackZone.radius = attackRange;
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Keep the attack zone glued to the character; tweak attackRange live.
    attackZone.center = obj.getPosition();
    attackZone.radius = attackRange;

    Log::print(("attack zone: " + attackZone.center.toString()).c_str());
}
