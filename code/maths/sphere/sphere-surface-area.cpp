#include "testerScript.h"

#include "Sphere.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Sphere zone(Vector3::ZERO, zoneRadius);

    // Spawn budget scales with the shell area, tuned live via zoneRadius.
    float budget = zone.surfaceArea() * particlesPerUnit;

    Log::print(("shell particle budget: " + std::to_string(budget)).c_str());
}
