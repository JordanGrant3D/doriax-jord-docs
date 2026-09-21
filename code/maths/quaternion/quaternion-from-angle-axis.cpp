#include "testerScript.h"

#include "Quaternion.h"
#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    // Turntable pickup: accumulate the spin while SPACE is held.
    if (Input::isKeyPressed(D_KEY_SPACE)) {
        spinAngle += spinSpeed * Engine::getDeltatime();
    }

    Quaternion spin;
    spin.fromAngleAxis(spinAngle, Vector3::UNIT_Y);

    Log::print(("spin: " + spin.toString()).c_str());
}
