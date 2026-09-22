#include "testerScript.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object parent(getScene());
    Object child(getScene());
    parent.addChild(&child);
    childEntity = child.getEntity();
    Log::print("child attached to parent");
}

void testerScript::onUpdate() {
    if (detached) {
        return;
    }
    detached = true;
    Object child(getScene(), childEntity);
    child.removeParent();
    Log::print("child detached to scene root");
}
