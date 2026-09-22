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
    Object obj(getScene(), getEntity());
    obj.setVisible(true);
    Log::print("object visible");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    obj.setVisible(!hidden);
    if (obj.isVisible()) {
        Log::print("object visible");
    } else {
        Log::print("object hidden");
    }
    obj.setVisibleOnly(!hidden);
    Log::print("object self visibility set");
}
