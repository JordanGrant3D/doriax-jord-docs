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

    Quaternion raw = obj.getRotation();
    raw[1] += drift;

    // normalized() preserves raw, so the drift log below stays honest.
    Quaternion clean = raw.normalized();
    obj.setRotation(clean);

    Log::print(("was norm: " + std::to_string(raw.norm())).c_str());
}
