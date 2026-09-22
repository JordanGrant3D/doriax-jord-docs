#include "testerScript.h"
#include "AABB.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Copy the tuned trigger volume into the working box.
    AABB box = triggerZone;

    if (box == triggerZone) {
        Log::print("trigger copy matches original");
    }

    // Move the copy away so it no longer overlaps the original.
    box.setMinimum(10.0f, 10.0f, 10.0f);
    box.setMaximum(12.0f, 12.0f, 12.0f);

    if (box != triggerZone) {
        Log::print("moved copy no longer matches original");
    }
}
