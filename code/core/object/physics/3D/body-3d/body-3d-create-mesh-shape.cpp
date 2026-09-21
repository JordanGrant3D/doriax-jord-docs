#include "testerScript.h"

#include "Body3D.h"
#include "Object.h"
#include "Log.h"
#include "Input.h"
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
    body.createMeshShape();
    body.setType(BodyType::STATIC);
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body3D ground = obj.getBody3D();
    size_t arena = ground.getNumShapes();
    Log::print("static arena ready");
}
