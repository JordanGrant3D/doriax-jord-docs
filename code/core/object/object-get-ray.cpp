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
    Ray ray = obj.getRay(Vector3(0.0f, -1.0f, 0.0f));
    Log::print("down ray created");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Ray ray = obj.getRay(Vector3(0.0f, -1.0f, 0.0f));
    Log::print("down ray updated");
}
