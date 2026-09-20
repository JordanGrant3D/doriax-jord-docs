#include "testerScript.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    obj.setPosition(Vector3(1.0f, 2.0f, 3.0f));
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Example: "Vector3(1.000000, 2.000000, 3.000000)".
    std::string label = obj.getPosition().toString();

    // Keep the value alive for the debugger / UI binding.
    (void)label;
}
