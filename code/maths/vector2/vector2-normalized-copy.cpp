#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 raw(Input::getMousePosition().x * 0.001f, Input::getMousePosition().y * 0.001f);

    Vector2 dir = raw.normalizedCopy();
    Vector2 weighted = dir * lookWeight;

    Log::print(("weighted look: " + weighted.toString()).c_str());
}
