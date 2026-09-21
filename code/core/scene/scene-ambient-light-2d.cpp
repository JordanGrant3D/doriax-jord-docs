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
    scene->setAmbientLight2D(ambient2D, Vector3(0.9f, 0.9f, 1.0f));
    Log::print("2d ambient applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    float i = scene->getAmbientLight2DIntensity();
    Vector3 c = scene->getAmbientLight2DColor();
    if (i > 1.0f) {
        scene->setAmbientLight2D(1.0f);
    }
    Log::print("2d ambient checked");
    (void)c;
}
