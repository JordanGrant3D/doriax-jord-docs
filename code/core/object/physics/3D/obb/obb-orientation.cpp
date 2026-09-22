#include "testerScript.h"
#include "OBB.h"
#include "Quaternion.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    OBB box(Vector3(-1.0f, -1.0f, -1.0f), Vector3(1.0f, 1.0f, 1.0f));

    // Rotate the box; the local axes follow the orientation quaternion.
    box.setOrientation(Quaternion(0.0f, 45.0f, 0.0f));
    Quaternion orientation = box.getOrientation();
    Log::print(("orientation: " + orientation.toString()).c_str());
    Log::print(("axisX now: " + box.getAxisX().toString()).c_str());
}
