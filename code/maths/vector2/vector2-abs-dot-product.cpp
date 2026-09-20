#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 stick(Input::getMousePosition().x * 0.001f, Input::getMousePosition().y * 0.001f);

    float energy = stick.absDotProduct(referenceAxis);
    Log::print(("stick energy: " + std::to_string(energy)).c_str());
}
