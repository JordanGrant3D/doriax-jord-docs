#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Centre a label horizontally inside the panel using the read-only accessor.
    float labelX = panel.getX() + panel.getWidth() * 0.5f;

    Log::print(("label column: " + std::to_string(labelX)).c_str());
}
