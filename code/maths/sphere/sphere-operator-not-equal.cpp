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
    Object obj(getScene(), getEntity());
    zone = Sphere(obj.getPosition(), zoneRadius);
    lastZone = zone;
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    zone.center = obj.getPosition();
    zone.radius = zoneRadius;

    // Same idea as CharacterController's anim-state switch: only react on change.
    if (zone != lastZone) {
        Log::print(("zone reshaped, radius: " + std::to_string(zone.radius)).c_str());
        lastZone = zone;
    }
}
