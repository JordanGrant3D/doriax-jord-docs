#include "testerScript.h"
#include "Log.h"
#include <vector>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Log::print("multi-touch display ready");
}

void testerScript::onUpdate() {
    std::vector<Touch> touches = Input::getTouches();
    for (size_t i = 0; i < touches.size(); i++) {
        Log::print("touch %d at x=%.1f y=%.1f radius=%.1f", touches[i].pointer, touches[i].position.x, touches[i].position.y, touchRadius);
    }
}
