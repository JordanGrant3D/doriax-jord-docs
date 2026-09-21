#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    chaseCam.setType(CameraType::CAMERA_PERSPECTIVE);
    chaseCam.setPerspective(fieldOfView, chaseCam.getAspect(), 0.1f, 500.0f);
    chaseCam.activate();
}

void testerScript::onUpdate() {
    Camera chaseCam(getScene(), getScene()->getCamera());
    Object player(getScene(), getEntity());
    Vector3 anchor = player.getPosition();
    if (usePerspective) {
        chaseCam.setType(CameraType::CAMERA_PERSPECTIVE);
        Log::print("chase camera: perspective");
    } else {
        chaseCam.setType(CameraType::CAMERA_ORTHO);
        Log::print("chase camera: orthographic");
    }
    chaseCam.setPosition(anchor + Vector3(0.0f, 3.0f, 6.0f));
    chaseCam.setTarget(anchor);
}
