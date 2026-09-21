#include "testerScript.h"
#include "subsystem/PhysicsSystem.h"
#include "Body2D.h"
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
    Body2D body(getScene(), getEntity());
    body.createBoxShape(bodyWidth, bodyHeight);
    auto physics = getScene()->getSystem<PhysicsSystem>();
    physics->createBody2D(getEntity());
}

void testerScript::onUpdate() {
    Scene* scene = getScene();
    if (scene == nullptr) {
        Log::print("no scene");
        return;
    }
    auto physics = getScene()->getSystem<PhysicsSystem>();
    Body2D body(getScene(), getEntity());
    if (body.getNumShapes() == 0) {
        body.createBoxShape(bodyWidth, bodyHeight);
        physics->createBody2D(getEntity());
    }
    Log::print("hero 2d body ensured");
}
