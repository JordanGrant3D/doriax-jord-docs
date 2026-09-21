#include "testerScript.h"

#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Pulse only the blue channel; red, green and alpha stay untouched.
    if (Input::isKeyPressed(D_KEY_B)) {
        tint.z += bluePulseSpeed * Engine::getDeltatime();
        if (tint.z > 1.0f) tint.z = 0.0f;
    }

    Log::print(("tint: " + tint.toString()).c_str());
}
