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
    idleAnim.setBlendWeight(blendWeight);
    model.playAnimation(idleAnimation, fadeTime);
    Log::print("idle blend weight: %f", (double)idleAnim.getBlendWeight());
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
            idleAnim.setBlendWeight(1.0f);
            model.playAnimation(idleAnimation, fadeTime);
            Log::print("playing idle, weight: %f", (double)idleAnim.getBlendWeight());
            break;
        case 1:
            walkAnim.setBlendWeight(1.0f);
            model.playAnimation(walkAnimation, fadeTime);
            Log::print("playing walk, weight: %f", (double)walkAnim.getBlendWeight());
            break;
        case 2:
            model.playAnimation(jumpAnimation, fadeTime);
            Log::print("playing jump, weight: %f", (double)model.getAnimation(jumpAnimation).getBlendWeight());
            break;
        default:
            idleAnim.setBlendWeight(0.0f);
            walkAnim.setBlendWeight(0.0f);
            model.stopAnimations(fadeTime);
            Log::print("waiting");
            break;
    }
}
