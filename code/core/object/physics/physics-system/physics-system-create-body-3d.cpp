#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Body3D.h"
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
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    Object hero(getScene(), getEntity());
    Body3D body(getScene(), getEntity());
    body.createCapsuleShape(capsuleHeight, capsuleRadius);
    auto physics = getScene()->getSystem<PhysicsSystem>();
    physics->createBody3D(getEntity());
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    Body3D body(getScene(), getEntity());
    if (body.getNumShapes() == 0) {
        body.createCapsuleShape(capsuleHeight, capsuleRadius);
        physics->createBody3D(getEntity());
    }
    Log::print("hero 3d body ensured");
}
