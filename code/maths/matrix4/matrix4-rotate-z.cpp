#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Bank left/right while strafing with A/D; level otherwise.
    float roll = 0.0f;
    if (Input::isKeyPressed(D_KEY_A)) roll = bankDegrees;
    if (Input::isKeyPressed(D_KEY_D)) roll = -bankDegrees;

    Matrix4 bank = Matrix4::rotateZMatrix(roll);
    Vector3 up = bank * Vector3::UNIT_Y;

    Log::print(("up: " + up.toString()).c_str());
}
