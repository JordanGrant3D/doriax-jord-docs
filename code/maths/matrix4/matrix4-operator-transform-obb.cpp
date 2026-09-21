#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    OBB blade(Vector3(2.0f, 1.0f, 0.0f), Vector3(1.5f, 0.2f, 0.2f));

    // Yaw the whole blade trap around the arena centre.
    OBB swung = Matrix4::rotateYMatrix(yawDegrees) * blade;

    Log::print(("swung centre: " + swung.getCenter().toString()).c_str());
}
