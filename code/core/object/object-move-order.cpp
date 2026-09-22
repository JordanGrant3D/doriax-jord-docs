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
    Object first(getScene());
    Object second(getScene());
    Object third(getScene());
    parent.addChild(&first);
    parent.addChild(&second);
    parent.addChild(&third);
    firstEntity = first.getEntity();
    secondEntity = second.getEntity();
    thirdEntity = third.getEntity();
    Log::print("siblings attached");
}

void testerScript::onUpdate() {
    if (reordered) {
        return;
    }
    reordered = true;
    Object first(getScene(), firstEntity);
    Object second(getScene(), secondEntity);
    Object third(getScene(), thirdEntity);
    first.moveToTop();
    Log::print("first moved to top");
    second.moveUp();
    Log::print("second moved up");
    third.moveDown();
    Log::print("third moved down");
    first.moveToBottom();
    Log::print("first moved to bottom");
}
