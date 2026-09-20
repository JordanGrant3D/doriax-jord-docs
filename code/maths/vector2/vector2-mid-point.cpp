#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 firstTouch = Input::getMousePosition();

    // Pinch centre between the live cursor and the stored second touch.
    Vector2 pinchCentre = firstTouch.midPoint(secondTouch);

    Log::print(("pinch centre: " + pinchCentre.toString()).c_str());
}
