#include "testerScript.h"

#include "Joint3D.h"
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
    Object mount(getScene());
    Body3D mountBody = mount.getBody3D();
    mountBody.setType(BodyType::STATIC);
    mountBody.load();
    Object platform(getScene(), getEntity());
    Body3D platformBody = platform.getBody3D();
    platformBody.createBoxShape(2.0f, 0.2f, 2.0f);
    platformBody.setType(BodyType::DYNAMIC);
    platformBody.load();
    Joint3D chain(getScene());
    chain.setDistanceJoint(mount.getEntity(), platform.getEntity());
    chain.setDistanceJoint(mount.getEntity(), platform.getEntity(), mount.getPosition(), platform.getPosition());
}

void testerScript::onUpdate() {
    Object platform(getScene(), getEntity());
    Vector3 pos = platform.getPosition();
    Log::print(pos.y < chainLength ? "swinging platform hanging" : "chain at full stretch");
}
