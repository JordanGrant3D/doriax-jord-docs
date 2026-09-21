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
    // Restore the tuned layout from the saved copy.
    panel = savedLayout;
}

void testerScript::onUpdate() {
    // Unpack a shader-style Vector4 (x, y, width, height) into the panel.
    panel = packedLayout;

    Log::print(("panel: " + panel.toString()).c_str());
}
