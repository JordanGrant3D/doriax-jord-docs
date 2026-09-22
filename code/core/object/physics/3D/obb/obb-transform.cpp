#include "testerScript.h"
#include "OBB.h"
#include "Matrix4.h"
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

    // Move the box with a matrix (transforms in place, returns void).
    box.transform(Matrix4::translateMatrix(5.0f, 0.0f, 0.0f));
    Log::print(("center: " + box.getCenter().toString()).c_str());

    // Same result via translate / rotate / scale components.
    box.transform(Vector3(0.0f, 2.0f, 0.0f), Quaternion(0.0f, 45.0f, 0.0f), Vector3(1.0f, 1.0f, 1.0f));
    Log::print(("moved center: " + box.getCenter().toString()).c_str());
}
