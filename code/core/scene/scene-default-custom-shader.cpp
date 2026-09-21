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
        scene->setDefaultCustomShader(ShaderType::MESH, shaderPath);
    }
    Log::print("default custom shader applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    const std::string& p = scene->getDefaultCustomShader(ShaderType::MESH);
    if (p.empty()) {
        Log::print("default custom shader is builtin");
    } else {
        Log::print("default custom shader checked");
    }
}
