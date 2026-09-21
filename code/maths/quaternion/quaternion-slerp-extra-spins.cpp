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
    Object obj(getScene(), getEntity());
    startPose = obj.getRotation();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Twirl twice while returning to the start pose.
    blend += Engine::getDeltatime() * 0.5f;
    if (blend > 1.0f) blend = 0.0f;

    obj.setRotation(Quaternion::slerpExtraSpins(blend, startPose, startPose, extraSpins));
    Log::print(("twirl: " + obj.getRotation().toString()).c_str());
}
