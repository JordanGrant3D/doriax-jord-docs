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
    child.setPosition(1.0f, 0.0f, 0.0f);
    overlay.setPosition(0.0f, 1.0f, 0.0f);
    parent.addChild(&child);
    parent.addChild(overlay.getEntity());
    Log::print("children attached to parent");
}

void testerScript::onUpdate() {
    Log::print("hierarchy ready");
}
