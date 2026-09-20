#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 look = Input::getMousePosition();
    Vector2 swapped = look;

    // Portrait screens transpose the look axes; toggle live to preview.
    if (portraitMode) {
        swapped.swap(look);
        Log::print(("portrait look: " + swapped.toString()).c_str());
    } else {
        Log::print(("landscape look: " + look.toString()).c_str());
    }
}
