#include "testerScript.h"

#include "Rect.h"
#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Nudge the panel with A/D; only the left edge moves.
    if (Input::isKeyPressed(D_KEY_A)) panel.x -= slideSpeed * Engine::getDeltatime();
    if (Input::isKeyPressed(D_KEY_D)) panel.x += slideSpeed * Engine::getDeltatime();

    Log::print(("panel left: " + std::to_string(panel.x)).c_str());
}
