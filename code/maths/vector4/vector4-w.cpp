#include "testerScript.h"

#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Fade only the alpha channel; RGB stays untouched.
    if (Input::isKeyPressed(D_KEY_F)) {
        tint.w -= fadeSpeed * Engine::getDeltatime();
        if (tint.w < 0.0f) tint.w = 1.0f;
    }

    Log::print(("tint: " + tint.toString()).c_str());
}
