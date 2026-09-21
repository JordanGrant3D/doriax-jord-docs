#include "testerScript.h"
#include "Occluder2D.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"
#include <string>

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
    Occluder2D wall(getScene());
    wall.addVertex(-60.0f, -20.0f);
    wall.addVertex(60.0f, -20.0f);
    wall.addVertex(60.0f, 20.0f);
    wallEntity = wall.getEntity();
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Occluder2D wall(getScene(), wallEntity);
    unsigned int n = wall.getVertexCount();
    if ((int)n >= minVertices) {
        Log::print(("shadow wall ready: " + std::to_string(n)).c_str());
    }
}
