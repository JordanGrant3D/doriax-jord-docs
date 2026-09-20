#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    cursor = Vector2::ZERO;
}

void testerScript::onUpdate() {
    if (Input::isKeyPressed(D_KEY_LEFT)) {
        cursor = cursor + Vector2::NEGATIVE_UNIT_X * stepSize;
        Log::print(("cursor: " + cursor.toString()).c_str());
    }
}
