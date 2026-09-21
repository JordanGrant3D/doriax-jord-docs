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
    scene->setGravity3D(0.0f, gravityY, 0.0f);
    Log::print("3d gravity applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Vector3 g = scene->getGravity3D();
    if (g.y > 0.0f) {
        scene->setGravity3D(Vector3(0.0f, -9.81f, 0.0f));
    }
    Log::print("3d gravity checked");
}
