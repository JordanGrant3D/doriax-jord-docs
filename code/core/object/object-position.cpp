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
    obj.setPosition(100.0f, 0.0f, -50.0f);
    obj.setPosition(Vector3(1.0f, 2.0f, 3.0f));
    obj.setPosition(10.0f, 20.0f);
    obj.setPosition(spawnX, spawnY, spawnZ);
    Log::print("spawn position set");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Vector3 localPos = obj.getPosition();
    Vector3 worldPos = obj.getWorldPosition();
    Log::print(("local: " + localPos.toString()).c_str());
    Log::print(("world: " + worldPos.toString()).c_str());
}
