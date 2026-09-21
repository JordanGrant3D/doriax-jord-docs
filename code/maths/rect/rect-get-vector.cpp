#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Upload the viewport to the GPU as one vec4 uniform.
    Vector4 packed = viewport.getVector();

    Log::print(("viewport vec4: " + packed.toString()).c_str());
}
