#include "testerScript.h"
#include "Log.h"
#include <string>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    chaseCam.setPerspective(60.0f, 1.333f, 0.1f, 500.0f);
    chaseCam.setTarget(0.0f, 1.5f, 0.0f);
    chaseCam.activate();
}

void testerScript::onUpdate() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    Object player(getScene(), getEntity());
    Vector3 anchor = player.getPosition();
    chaseCam.setTarget(anchor);
    Vector3 forward = chaseCam.getDirection();
    chaseCam.setPosition(anchor - (forward * followDistance) + Vector3(0.0f, followHeight, 0.0f));
    Log::print(forward.toString().c_str());
}
