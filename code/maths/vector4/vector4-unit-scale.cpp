#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    // Opaque white: no tint applied. Edit tint live to preview colouring.
    tint = Vector4::UNIT_SCALE;
}

void testerScript::onUpdate() {
    Log::print(("tint: " + tint.toString()).c_str());
}
