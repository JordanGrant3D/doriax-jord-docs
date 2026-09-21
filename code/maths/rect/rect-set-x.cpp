#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Slide the banner in from the left until it docks at x == 20.
    if (banner.getX() < 20.0f) {
        banner.setX(banner.getX() + slideSpeed * Engine::getDeltatime());
    }

    Log::print(("banner left: " + std::to_string(banner.getX())).c_str());
}
