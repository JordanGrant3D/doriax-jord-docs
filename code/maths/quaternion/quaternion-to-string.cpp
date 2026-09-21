#include "testerScript.h"

#include "Quaternion.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Example: "Quaternion(0.707107, 0.000000, 0.707107, 0.000000)".
    if (!showRotation) return;

    std::string label = obj.getRotation().toString();
    Log::print(label.c_str());
}
