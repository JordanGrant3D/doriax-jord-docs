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
    patrol = Sphere(obj.getPosition(), 1.0f);
}

void testerScript::onUpdate() {
    // Stretch the patrol bubble so it also covers the new waypoint.
    patrol.merge(Sphere(waypoint, waypointRadius));

    Log::print(("patrol radius: " + std::to_string(patrol.radius)).c_str());
}
