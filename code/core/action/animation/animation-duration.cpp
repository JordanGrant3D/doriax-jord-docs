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
    idleAnim.setDuration(clipDuration);
    model.playAnimation(idleAnimation, fadeTime);
    Log::print("idle duration: %f", (double)idleAnim.getDuration());
}

void testerScript::onUpdate() {
    if (desiredAnimState == currentState) {
        return;
    }
    currentState = desiredAnimState;
    Model model(getScene(), getEntity());
    switch (desiredAnimState) {
        case 0:
            model.playAnimation(idleAnimation, fadeTime);
            Log::print("playing idle, duration: %f", (double)model.getAnimation(idleAnimation).getDuration());
            break;
        case 1:
            model.playAnimation(walkAnimation, fadeTime);
            Log::print("playing walk, duration: %f", (double)model.getAnimation(walkAnimation).getDuration());
            break;
        case 2:
            model.playAnimation(jumpAnimation, fadeTime);
            Log::print("playing jump, duration: %f", (double)model.getAnimation(jumpAnimation).getDuration());
            break;
        default:
            model.stopAnimations(fadeTime);
            Log::print("waiting");
            break;
    }
}
