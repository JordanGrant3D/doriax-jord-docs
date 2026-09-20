#include "testerScript.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Vector2 mousePos = Input::getMousePosition();

    // Per-axis sensitivity: yaw and pitch can feel different.
    Vector2 perAxis = mousePos * axisSensitivity;

    // Uniform sensitivity scale, both member and free-function order.
    Vector2 uniform = mousePos * lookSensitivity;
    Vector2 uniform2 = lookSensitivity * mousePos;

    Log::print(("perAxis: " + perAxis.toString()).c_str());
    (void)uniform; (void)uniform2;
}
