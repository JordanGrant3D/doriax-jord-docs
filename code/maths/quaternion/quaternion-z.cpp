#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Quaternion bank;
    if (Input::isKeyPressed(D_KEY_A)) {
        bank.fromAngleAxis(bankDegrees, Vector3(0.0f, 0.0f, 1.0f));
    }

    Log::print(("bank z: " + std::to_string(bank.z)).c_str());
}
