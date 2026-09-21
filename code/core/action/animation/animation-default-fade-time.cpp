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
    Animation idleAnim = model.getAnimation(idleAnimation);
    idleAnim.setDefaultFadeTime(defaultFade);
    model.playAnimation(idleAnimation);
    Log::print("idle default fade: %f", (double)idleAnim.getDefaultFadeTime());
}

void testerScript::onUpdate() {
    if (desiredAnimState == currentState) {
        return;
    }
    currentState = desiredAnimState;
    Model model(getScene(), getEntity());
    switch (desiredAnimState) {
        case 0:
            model.playAnimation(idleAnimation);
            Log::print("playing idle, fade: %f", (double)model.getAnimation(idleAnimation).getDefaultFadeTime());
            break;
        case 1:
            model.playAnimation(walkAnimation);
            Log::print("playing walk, fade: %f", (double)model.getAnimation(walkAnimation).getDefaultFadeTime());
            break;
        case 2:
            model.playAnimation(jumpAnimation);
            Log::print("playing jump, fade: %f", (double)model.getAnimation(jumpAnimation).getDefaultFadeTime());
            break;
        default:
            model.stopAnimations(defaultFade);
            Log::print("waiting");
            break;
    }
}
