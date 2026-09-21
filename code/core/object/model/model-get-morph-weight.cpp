#include "testerScript.h"
#include "Log.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Model model(getScene(), getEntity());
    model.loadModel("characters/face.glb");
    Log::print("face model loaded");
}

void testerScript::onUpdate() {
    Model model(getScene(), getEntity());
    float named = model.getMorphWeight(morphName);
    float indexed = model.getMorphWeight(0);
    (void)indexed;
    Log::print(("smile weight: " + std::to_string(named)).c_str());
}
