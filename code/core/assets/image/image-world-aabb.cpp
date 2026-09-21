#include "testerScript.h"
#include "Log.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Image portrait(getScene());
    portrait.createImage();
    portrait.setTexture(portraitPath);
    AABB world = portrait.getWorldAABB();
    (void)world;
}

void testerScript::onUpdate() {
    Image portrait(getScene(), getEntity());
    AABB world = portrait.getWorldAABB();
    Vector3 center = world.getCenter();
    Log::print(("portrait world center: " + center.toString()).c_str());
}
