#include "testerScript.h"

#include "Log.h"
#include "Camera.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (!isActive) return;

    // Same guard CharacterController runs before touching the camera.
    Entity camEntity = getScene()->getCamera();
    if (camEntity == NULL_ENTITY) {
        Log::error("no camera in scene, cannot drive chase view");
        return;
    }

    Camera cam(getScene(), camEntity);
    (void)cam;
}
