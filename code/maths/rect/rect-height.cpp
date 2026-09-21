#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (zoom < 0.5f) zoom = 0.5f;
    if (zoom > 2.0f) zoom = 2.0f;

    // Zoom scales the viewport height around its top edge.
    minimap.height = 280.0f * zoom;

    Log::print(("minimap height: " + std::to_string(minimap.height)).c_str());
}
