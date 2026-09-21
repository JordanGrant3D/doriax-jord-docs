#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
}

void testerScript::onUpdate() {
    // Read the geometry by index (const overload).
    float left = panel[0];
    float top = panel[1];

    // Widen through the index operator (non-const overload).
    panel[2] = 220.0f;
    panel[3] = 64.0f;

    Log::print(("panel origin: " + std::to_string(left) + ", " + std::to_string(top)).c_str());
}
