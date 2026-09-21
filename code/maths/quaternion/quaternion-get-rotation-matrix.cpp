#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    if (!validateRoundTrip) {
        Log::print("validation skipped");
        return;
    }

    // Round-trip the live rotation through matrix form and back.
    Matrix4 mat = obj.getRotation().getRotationMatrix();
    Quaternion back;
    back.fromRotationMatrix(mat);

    Log::print(("round-trip ok: " + std::to_string(back.equals(obj.getRotation()))).c_str());
}
