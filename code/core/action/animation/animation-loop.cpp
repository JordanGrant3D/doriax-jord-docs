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
    idleAnim.setLoop(loopIdle);
    model.playAnimation(idleAnimation, fadeTime);
    Log::print("idle loop: %d", idleAnim.isLoop() ? 1 : 0);
}

void testerScript::onUpdate() {
    if (desiredAnimState == currentState) {
        return;
    }
    currentState = desiredAnimState;
    Model model(getScene(), getEntity());
    Animation idleAnim = model.getAnimation(idleAnimation);
    Animation walkAnim = model.getAnimation(walkAnimation);
    Animation jumpAnim = model.getAnimation(jumpAnimation);
    switch (desiredAnimState) {
        case 0:
            idleAnim.setLoop(true);
            model.playAnimation(idleAnimation, fadeTime);
            Log::print("playing idle, loop: %d", idleAnim.isLoop() ? 1 : 0);
            break;
        case 1:
            walkAnim.setLoop(true);
            model.playAnimation(walkAnimation, fadeTime);
            Log::print("playing walk, loop: %d", walkAnim.isLoop() ? 1 : 0);
            break;
        case 2:
            jumpAnim.setLoop(false);
            model.playAnimation(jumpAnimation, fadeTime);
            Log::print("playing jump once, loop: %d", jumpAnim.isLoop() ? 1 : 0);
            break;
        default:
            model.stopAnimations(fadeTime);
            Log::print("waiting");
            break;
    }
}
