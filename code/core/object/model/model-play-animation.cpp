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
    model.findAnimation(idleClip).setLoop(true);
    model.findAnimation(walkClip).setLoop(true);
    model.playAnimation(0);
    Log::print("playing idle");
}

void testerScript::onUpdate() {
    elapsed += Engine::getDeltatime();
    Model model(getScene(), getEntity());
    if (!walked && elapsed > 1.0f) {
        model.playAnimation(walkClip, fadeTime);
        walked = true;
        Log::print("playing walk");
    }
    if (!jumped && elapsed > 3.0f) {
        model.playAnimation(jumpClip, fadeTime);
        jumped = true;
        Log::print("playing jump");
    }
}
