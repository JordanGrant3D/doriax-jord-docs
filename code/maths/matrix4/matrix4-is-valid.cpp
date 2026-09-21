#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Matrix4 pose = Matrix4::translateMatrix(spawn);

    // Never place the character with a NaN/inf matrix: hold identity.
    if (!pose.isValid()) {
        Log::print("pose invalid, holding identity");
        pose.identity();
        return;
    }

    Log::print(("pose ok: " + pose.toString()).c_str());
}
