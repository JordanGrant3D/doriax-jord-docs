#include "testerScript.h"

#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Pulse only the green channel; red, blue and alpha stay untouched.
    if (Input::isKeyPressed(D_KEY_G)) {
        tint.y += greenPulseSpeed * Engine::getDeltatime();
        if (tint.y > 1.0f) tint.y = 0.0f;
    }

    Log::print(("tint: " + tint.toString()).c_str());
}
