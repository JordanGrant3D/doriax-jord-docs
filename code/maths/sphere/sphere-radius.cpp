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
    aggroZone.radius = aggroRadius;
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Grow or shrink the aggro bubble live from the properties tab.
    aggroZone.center = obj.getPosition();
    aggroZone.radius = aggroRadius;

    Log::print(("aggro radius: " + std::to_string(aggroZone.radius)).c_str());
}
