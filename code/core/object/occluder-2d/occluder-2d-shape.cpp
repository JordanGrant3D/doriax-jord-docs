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
    wall.setPosition(Vector3(500.0f, 200.0f, 0.0f));
    wallEntity = wall.getEntity();
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Occluder2D wall(getScene(), wallEntity);
    wall.setShape(usePolygon ? Occluder2DShape::POLYGON : Occluder2DShape::AUTO_QUAD);
    Occluder2DShape s = wall.getShape();
    (void)s;
    Log::print(usePolygon ? "shadow wall uses polygon" : "shadow wall uses auto quad");
}
