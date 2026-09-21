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
    baseZone = Sphere(obj.getPosition(), baseRange);
}

void testerScript::onUpdate() {
    // Snapshot the tuned zone, then experiment on the copy.
    workZone = baseZone;
    workZone.radius = baseRange * 2.0f;

    Log::print(("work radius: " + std::to_string(workZone.radius)).c_str());
}
