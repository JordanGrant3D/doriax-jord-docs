#include "testerScript.h"
#include "Body3D.h"
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
    Body3D body = obj.getBody3D();
    body.createBoxShape(1.0f, 1.0f, 1.0f);
    body.setType(BodyType::DYNAMIC);
    body.load();
    Log::print("3D body loaded");
}

void testerScript::onUpdate() {
    if (removeBody) {
        Object obj(getScene(), getEntity());
        obj.removeBody3D();
        Log::print("3D body removed");
    }
}
