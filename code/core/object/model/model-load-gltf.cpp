#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Model model(getScene(), getEntity());
    if (!model.loadGLTF(modelFile)) {
        Log::print("failed to load character GLTF");
        return;
    }
    Log::print("character GLTF loaded");
    model.playAnimation(idleClip);
}
