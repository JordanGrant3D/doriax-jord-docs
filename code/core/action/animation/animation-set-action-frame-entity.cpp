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
    PositionAction moveUp(getScene());
    moveUp.setAction(Vector3(stepDistance, 0.0f, 0.0f), Vector3(stepDistance, stepDistance, 0.0f), 1.0f);
    PositionAction hop(getScene());
    hop.setAction(Vector3(0.0f, 0.0f, 0.0f), Vector3(0.0f, 2.0f, 0.0f), 0.5f);

    Animation seq(getScene());
    seq.setDuration(2.0f);
    seq.addActionFrame(0.0f, moveRight.getEntity(), getEntity());
    seq.addActionFrame(secondStart, moveUp.getEntity(), getEntity());
    seq.setActionFrameEntity(0, hop.getEntity());
    seqEntity = seq.getEntity();
    seq.start();
    Log::print("frame 0 action replaced, frames: %d", (int)seq.getActionFrameSize());
}

void testerScript::onUpdate() {
    if (logged) {
        return;
    }
    logged = true;
    Animation seq(getScene(), seqEntity);
    Log::print("frame 0 now a hop, frames: %d", (int)seq.getActionFrameSize());
}
