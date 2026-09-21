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
        scene->setDefaultPointsShader(shaderPath);
    }
    Log::print("default points shader applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    const std::string& p = scene->getDefaultPointsShader();
    if (p.empty()) {
        Log::print("default points shader is builtin");
    } else {
        Log::print("default points shader checked");
    }
}
