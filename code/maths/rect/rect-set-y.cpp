#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Drop the banner from above until it docks at y == 20.
    if (banner.getY() < 20.0f) {
        banner.setY(banner.getY() + dropSpeed * Engine::getDeltatime());
    }

    Log::print(("banner top: " + std::to_string(banner.getY())).c_str());
}
