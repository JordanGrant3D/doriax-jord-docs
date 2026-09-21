#include "testerScript.h"

#include "Matrix3.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    facing.identity();

    // Mirror the character by negating the X basis entry.
    facing.set(0, 0, mirrorX ? -1.0f : 1.0f);

    Log::print(("facing: " + facing.toString()).c_str());
}
