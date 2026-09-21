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
    AABB local = portrait.getAABB();
    (void)local;
}

void testerScript::onUpdate() {
    Image portrait(getScene(), getEntity());
    AABB local = portrait.getAABB();
    Vector3 extent = local.getMaximum() - local.getMinimum();
    Log::print(("portrait local size: " + extent.toString()).c_str());
}
