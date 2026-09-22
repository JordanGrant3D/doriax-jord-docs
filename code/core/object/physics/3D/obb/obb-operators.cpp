#include "testerScript.h"
#include "OBB.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Copy the tuned trigger volume into the working box.
    OBB box = triggerZone;

    if (box == triggerZone) {
        Log::print("trigger copy matches original");
    }

    // Move the copy away so it no longer overlaps the original.
    box.setCenter(Vector3(10.0f, 10.0f, 10.0f));

    if (box != triggerZone) {
        Log::print("moved copy no longer matches original");
    }
}
