#include "testerScript.h"
#include "AABB.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    AABB zone(zoneMin, zoneMax);

    if (zone.contains(insidePoint)) {
        Log::print("coin inside the zone, collecting");
    }

    if (!zone.contains(outsidePoint)) {
        Log::print("coin left the zone");
    }

    AABB inner(innerMin, innerMax);
    if (zone.contains(inner)) {
        Log::print("chest fully inside the vault");
    }

    AABB overlap(overlapMin, overlapMax);
    if (!zone.contains(overlap)) {
        Log::print("crate sticks out of the vault");
    }
}
