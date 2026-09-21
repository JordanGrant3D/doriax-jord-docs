#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Index 0 is w (unlike Vector4 where 3 is w): read the scalar part.
    float scalar = facing[0];

    // Nudge the yaw-carrying y component through the writable overload.
    facing[2] = 0.0f;

    Log::print(("scalar: " + std::to_string(scalar)).c_str());
}
