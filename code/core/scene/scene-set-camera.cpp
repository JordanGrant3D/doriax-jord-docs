#include "testerScript.h"
#include "Camera.h"
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
    Camera cam(scene, scene->getCamera());
    cam.setPosition(0.0f, camOffsetY, 6.0f);
    scene->setCamera(&cam);
    Log::print("active camera set");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Entity camEntity = scene->getCamera();
    scene->setCamera(camEntity);
    Log::print("active camera reasserted");
}
