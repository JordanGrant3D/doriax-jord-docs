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
    scene->setGravity2D(0.0f, gravityY);
    Log::print("2d gravity applied");
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Vector2 g = scene->getGravity2D();
    if (g.y > 0.0f) {
        scene->setGravity2D(Vector2(0.0f, -9.81f));
    }
    Log::print("2d gravity checked");
}
