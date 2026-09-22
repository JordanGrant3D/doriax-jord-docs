#include "testerScript.h"
#include "Object.h"
#include "Quaternion.h"
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
    obj.setRotation(0.0f, 45.0f, 0.0f);
    obj.setRotation(Quaternion(0.0f, 45.0f, 0.0f));
    obj.setRotation(pitchDegrees, yawDegrees, 0.0f);
    Log::print("facing set");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Quaternion localRot = obj.getRotation();
    Quaternion worldRot = obj.getWorldRotation();
    Log::print(("local: " + localRot.toString()).c_str());
    Log::print(("world: " + worldRot.toString()).c_str());
}
