#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Model model(getScene(), getEntity());
    model.loadModel("characters/hero.glb");
    model.playAnimation(idleClip);
    Log::print("playing idle");
}

void testerScript::onUpdate() {
    elapsed += Engine::getDeltatime();
    if (!restored && elapsed > 2.0f) {
        Model model(getScene(), getEntity());
        model.stopAnimations(0.2f);
        model.resetToBindPose();
        restored = true;
        Log::print("bind pose restored");
    }
}
