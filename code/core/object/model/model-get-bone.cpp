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
    Bone root = model.getBone(0);
    (void)root;
    Log::print("root bone ready");
}

void testerScript::onUpdate() {
    Model model(getScene(), getEntity());
    Bone head = model.getBone(boneName);
    head.setRotation(0.0f, 0.3f, 0.0f);
    Log::print("aiming head bone");
}
