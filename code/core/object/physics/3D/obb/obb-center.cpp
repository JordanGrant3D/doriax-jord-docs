#include "testerScript.h"
#include "OBB.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    OBB box(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));

    // Slide the box so it stays centered on the target.
    box.setCenter(followTarget);

    Vector3 center = box.getCenter();
    Log::print("box center: %f, %f, %f", center.x, center.y, center.z);
}
