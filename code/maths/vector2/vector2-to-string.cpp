#include "testerScript.h"

#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Example: "Vector2(960.000000, 540.000000)".
    std::string label = mousePos.toString();
    Log::print(label.c_str());
}
