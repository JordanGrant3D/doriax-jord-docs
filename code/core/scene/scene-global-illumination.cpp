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
    scene->setGlobalIllumination(giIntensity, Vector3(1.0f, 0.95f, 0.9f));
    Log::print("global illumination applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    float i = scene->getGlobalIlluminationIntensity();
    Vector3 c = scene->getGlobalIlluminationColor();
    if (i < 0.05f) {
        scene->setGlobalIllumination(0.05f);
    }
    Log::print("global illumination checked");
    (void)c;
}
