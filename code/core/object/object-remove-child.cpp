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
    Object overlay(getScene());
    parent.addChild(&child);
    parent.addChild(&overlay);
    parentEntity = parent.getEntity();
    childEntity = child.getEntity();
    overlayEntity = overlay.getEntity();
    Log::print("children attached to parent");
}

void testerScript::onUpdate() {
    if (removed) {
        return;
    }
    removed = true;
    Object parent(getScene(), parentEntity);
    Object child(getScene(), childEntity);
    parent.removeChild(&child);
    parent.removeChild(overlayEntity);
    Log::print("children removed from parent");
}
