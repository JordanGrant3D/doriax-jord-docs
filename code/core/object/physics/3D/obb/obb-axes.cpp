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

    // Tilt the box 45 degrees around Y; axes follow the orientation.
    box.setAxes(Quaternion(0.0f, 45.0f, 0.0f));
    Vector3 axisX = box.getAxisX();
    Vector3 axisY = box.getAxisY();
    Vector3 axisZ = box.getAxisZ();
    Log::print(("axisX: " + axisX.toString()).c_str());
    Log::print(("axisY: " + axisY.toString()).c_str());
    Log::print(("axisZ: " + axisZ.toString()).c_str());

    // Reset to axis-aligned by assigning the axes directly.
    box.setAxes(Vector3(1.0f, 0.0f, 0.0f), Vector3(0.0f, 1.0f, 0.0f), Vector3(0.0f, 0.0f, 1.0f));
    Log::print(("reset axisX: " + box.getAxisX().toString()).c_str());
}
