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
    if (autoResize) {
        scene->updateCameraSize();
    }
    Log::print("camera size updated");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Camera cam(scene, scene->getCamera());
    Object player(scene, getEntity());
    cam.setTarget(player.getPosition());
    scene->updateCameraSize();
    Log::print("camera size refreshed");
}
