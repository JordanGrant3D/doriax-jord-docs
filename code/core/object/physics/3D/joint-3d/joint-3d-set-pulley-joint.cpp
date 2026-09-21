#include "testerScript.h"

#include "Joint3D.h"
#include "component/Joint3DComponent.h"
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
    Object cabin(getScene(), getEntity());
    Body3D cabinBody = cabin.getBody3D();
    cabinBody.createBoxShape(2.0f, 0.3f, 2.0f);
    cabinBody.setType(BodyType::DYNAMIC);
    cabinBody.load();
    Object counter(getScene());
    Body3D counterBody = counter.getBody3D();
    counterBody.createBoxShape(1.0f, 1.0f, 1.0f);
    counterBody.setType(BodyType::DYNAMIC);
    counterBody.load();
    Vector3 topA = cabin.getPosition() + Vector3(0.0f, 5.0f, 0.0f);
    Vector3 topB = counter.getPosition() + Vector3(0.0f, 5.0f, 0.0f);
    Joint3D hoist(getScene());
    Joint3DComponent params;
    hoist.setPulleyJoint(params, cabin.getEntity(), counter.getEntity(), cabin.getPosition(), counter.getPosition(), topA, topB);
}

void testerScript::onUpdate() {
    Joint3D hoist(getScene(), getEntity());
    Log::print(counterMass > 0.0f ? "counterweight elevator balanced" : "counterweight missing");
}
