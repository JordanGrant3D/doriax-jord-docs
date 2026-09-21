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
    PositionAction moveRight(getScene());
    moveRight.setAction(Vector3(0.0f, 0.0f, 0.0f), Vector3(stepDistance, 0.0f, 0.0f), 1.0f);

    Animation seq(getScene());
    seq.setDuration(2.0f);
    seq.addActionFrame(0.0f, moveRight.getEntity(), getEntity());
    seq.setActionFrameDuration(0, frameDuration);
    seqEntity = seq.getEntity();
    seq.start();
    Log::print("frame 0 lasts %f", (double)seq.getActionFrame(0).duration);
}

void testerScript::onUpdate() {
    if (logged) {
        return;
    }
    logged = true;
    Animation seq(getScene(), seqEntity);
    Log::print("frame 0 duration: %f", (double)seq.getActionFrame(0).duration);
}
