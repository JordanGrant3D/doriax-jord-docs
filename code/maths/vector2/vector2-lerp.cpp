#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    smoothed = Input::getMousePosition();
}

void testerScript::onUpdate() {
    float t = smoothSpeed * Engine::getDeltatime();
    if (t > 1.0f) t = 1.0f;

    smoothed = smoothed.lerp(smoothGoal, t);
    Log::print(("smoothed: " + smoothed.toString()).c_str());
}
