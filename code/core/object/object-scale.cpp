#include "testerScript.h"
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
    Object obj(getScene(), getEntity());
    obj.setScale(2.0f);
    obj.setScale(Vector3(1.0f, 2.0f, 1.0f));
    obj.setScale(uniformScale);
    obj.setScale(Vector3(1.0f, stretchY, 1.0f));
    Log::print("scale set");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Vector3 localScale = obj.getScale();
    Vector3 worldScale = obj.getWorldScale();
    Log::print(("local: " + localScale.toString()).c_str());
    Log::print(("world: " + worldScale.toString()).c_str());
}
