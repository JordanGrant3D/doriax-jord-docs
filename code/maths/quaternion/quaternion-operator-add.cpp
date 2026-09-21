#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    poseA.fromAngleAxis(0.0f, Vector3::UNIT_Y);
    poseB.fromAngleAxis(90.0f, Vector3::UNIT_Y);
}

void testerScript::onUpdate() {
    // Raw component blend (unary plus is an explicit no-op copy).
    Quaternion mixed = +poseA + (poseB - poseA) * blend;
    mixed.normalize();

    Log::print(("mixed: " + mixed.toString()).c_str());
}
