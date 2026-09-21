#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // How far past the top edge has the cursor travelled?
    float penetration = mousePos.y - hotZone.getY();

    Log::print(("past top edge: " + std::to_string(penetration)).c_str());
}
