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
    Camera chaseCam(scene, scene->getCamera());
    Object player(scene, getEntity());
    chaseCam.setTarget(player.getPosition());
    Log::print("camera target set");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Camera chaseCam(scene, scene->getCamera());
    Object player(scene, getEntity());
    Vector3 anchor = player.getPosition();
    chaseCam.setPosition(anchor + Vector3(0.0f, followHeight, 6.0f));
    Log::print("camera following");
}
