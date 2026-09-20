#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    lookAccum = Vector2::ZERO;
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Accumulate the raw reading, then apply a uniform nudge to both axes.
    lookAccum += mousePos * 0.01f;
    lookAccum += nudge;

    Log::print(("lookAccum: " + lookAccum.toString()).c_str());
}
