#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Raw upload path: x, y, width, height as four contiguous floats.
    float* raw = viewport.ptr();

    Log::print(("viewport[0]: " + std::to_string(raw[0])).c_str());
}
