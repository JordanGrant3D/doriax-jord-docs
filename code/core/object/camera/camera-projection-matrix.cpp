#include "testerScript.h"
#include "Log.h"
#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    chaseCam.setPerspective(fieldOfView, 1.333f, 0.1f, 500.0f);
    chaseCam.activate();
}

void testerScript::onUpdate() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    Object player(getScene(), getEntity());
    Vector3 anchor = player.getPosition();
    chaseCam.setPerspective(fieldOfView, chaseCam.getAspect(), 0.1f, 500.0f);
    chaseCam.setPosition(anchor + Vector3(0.0f, 3.0f, followDistance));
    chaseCam.setTarget(anchor);
    Matrix4 projection = chaseCam.getProjectionMatrix();
    (void)projection;
    Log::print("chase projection matrix refreshed");
}
