#include "testerScript.h"

#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Pulse only the red channel; green, blue and alpha stay untouched.
    if (Input::isKeyPressed(D_KEY_R)) {
        tint.x += redPulseSpeed * Engine::getDeltatime();
        if (tint.x > 1.0f) tint.x = 0.0f;
    }

    Log::print(("tint: " + tint.toString()).c_str());
}
