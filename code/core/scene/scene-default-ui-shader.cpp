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
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    if (!shaderPath.empty()) {
        scene->setDefaultUIShader(shaderPath);
    }
    Log::print("default ui shader applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    const std::string& p = scene->getDefaultUIShader();
    if (p.empty()) {
        Log::print("default ui shader is builtin");
    } else {
        Log::print("default ui shader checked");
    }
}
