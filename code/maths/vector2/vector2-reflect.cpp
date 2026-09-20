#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    dotPosition = Vector2::ZERO;
}

void testerScript::onUpdate() {
    // Bounce a screensaver-style dot off the x == 500 wall.
    if (dotPosition.x >= 500.0f) {
        velocity = velocity.reflect(wallNormal);
        dotPosition.x = 500.0f;
        Log::print("bounced off right wall");
    }

    dotPosition = dotPosition + velocity * Engine::getDeltatime();
    Log::print(("dot: " + dotPosition.toString()).c_str());
}
