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
    Animation walkAnim = model.getAnimation(walkAnimation);
    idleAnim.setLoop(true);
    walkAnim.setLoop(true);
    idleAnim.fadeIn(0.0f);
    Log::print("idle faded in, weight: %f", (double)idleAnim.getBlendWeight());
}

void testerScript::onUpdate() {
    if (desiredAnimState == currentState) {
        return;
    }
    currentState = desiredAnimState;
    Model model(getScene(), getEntity());
    Animation idleAnim = model.getAnimation(idleAnimation);
    Animation walkAnim = model.getAnimation(walkAnimation);
    switch (desiredAnimState) {
        case 0:
            walkAnim.fadeOut(fadeTime);
            idleAnim.fadeIn(fadeTime);
            Log::print("fading to idle");
            break;
        case 1:
            idleAnim.fadeOut(fadeTime);
            walkAnim.fadeIn(fadeTime);
            Log::print("fading to walk");
            break;
        case 2:
            model.playAnimation(jumpAnimation, fadeTime);
            Log::print("playing jump");
            break;
        default:
            idleAnim.fadeOut(fadeTime);
            walkAnim.fadeOut(fadeTime);
            Log::print("waiting");
            break;
    }
}
