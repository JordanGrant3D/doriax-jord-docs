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
    idleAnim.setLoop(true);
    idleAnim.start(fadeInDuration);
    Log::print("idle started with fade");
}

void testerScript::onUpdate() {
    if (desiredAnimState == currentState) {
        return;
    }
    currentState = desiredAnimState;
    Model model(getScene(), getEntity());
    switch (desiredAnimState) {
        case 0: {
            Animation idleAnim = model.getAnimation(idleAnimation);
            idleAnim.setLoop(true);
            idleAnim.start(fadeInDuration);
            Log::print("idle started with fade");
            break;
        }
        case 1: {
            Animation walkAnim = model.getAnimation(walkAnimation);
            walkAnim.setLoop(true);
            walkAnim.start(fadeInDuration);
            Log::print("walk started with fade");
            break;
        }
        case 2: {
            Animation jumpAnim = model.getAnimation(jumpAnimation);
            jumpAnim.setLoop(false);
            jumpAnim.start(fadeInDuration);
            Log::print("jump started with fade");
            break;
        }
        default:
            model.stopAnimations(fadeInDuration);
            Log::print("waiting");
            break;
    }
}
