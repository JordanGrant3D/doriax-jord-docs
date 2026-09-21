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

    Quaternion lean;
    lean.fromAngleAxis(15.0f, Vector3::UNIT_Z);

    // Cheap per-frame wobble toward the lean pose.
    obj.setRotation(Quaternion::nlerp(leanAmount, obj.getRotation(), lean, true));
    Log::print(("wobble: " + obj.getRotation().toString()).c_str());
}
