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
    body.createHeightFieldShape();
    body.setType(BodyType::STATIC);
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body3D ground = obj.getBody3D();
    size_t hills = ground.getNumShapes();
    Log::print("terrain ready");
}
