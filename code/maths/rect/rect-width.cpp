#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (health < 0.0f) health = 0.0f;
    if (health > 1.0f) health = 1.0f;

    // Bar shrinks from the right as health drops; x and y never move.
    healthBar.width = 200.0f * health;

    Log::print(("bar width: " + std::to_string(healthBar.width)).c_str());
}
