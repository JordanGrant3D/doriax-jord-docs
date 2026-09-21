#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Centre a label vertically inside the panel using the read-only accessor.
    float labelY = panel.getY() + panel.getHeight() * 0.5f;

    Log::print(("label line: " + std::to_string(labelY)).c_str());
}
