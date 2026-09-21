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
    // Nudge the panel with W/S; only the top edge moves.
    if (Input::isKeyPressed(D_KEY_W)) panel.y -= slideSpeed * Engine::getDeltatime();
    if (Input::isKeyPressed(D_KEY_S)) panel.y += slideSpeed * Engine::getDeltatime();

    Log::print(("panel top: " + std::to_string(panel.y)).c_str());
}
