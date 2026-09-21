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
    Object rail(getScene());
    Body3D railBody = rail.getBody3D();
    railBody.setType(BodyType::STATIC);
    railBody.load();
    Object cart(getScene(), getEntity());
    Body3D cartBody = cart.getBody3D();
    cartBody.createBoxShape(1.2f, 0.8f, 0.8f);
    cartBody.setType(BodyType::DYNAMIC);
    cartBody.load();
    std::vector<Vector3> points = {Vector3(0.0f, 0.0f, 0.0f), Vector3(10.0f, 0.0f, 0.0f)};
    std::vector<Vector3> tangents = {Vector3::UNIT_X, Vector3::UNIT_X};
    std::vector<Vector3> normals = {Vector3::UNIT_Y, Vector3::UNIT_Y};
    Joint3D track(getScene());
    track.setPathJoint(rail.getEntity(), cart.getEntity(), points, tangents, normals, cart.getPosition(), true);
}

void testerScript::onUpdate() {
    Joint3D track(getScene(), getEntity());
    Log::print(cartSpeed > 0.0f ? "mine cart patrolling the loop" : "mine cart stopped");
}
