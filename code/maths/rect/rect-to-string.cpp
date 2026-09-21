#include "testerScript.h"

#include "Rect.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Example: "Rect(100.000000, 100.000000, 200.000000, 60.000000)".
    std::string label = panel.toString();
    Log::print(label.c_str());
}
