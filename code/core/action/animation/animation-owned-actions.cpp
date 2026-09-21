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
    Animation seq(getScene());
    seq.setDuration(sequenceDuration);
    seq.setOwnedActions(ownActions);
    PositionAction moveRight(getScene());
    moveRight.setAction(Vector3(0.0f, 0.0f, 0.0f), Vector3(5.0f, 0.0f, 0.0f), 1.0f);
    seq.addActionFrame(0.0f, moveRight.getEntity(), getEntity());
    seqEntity = seq.getEntity();
    seq.start();
    Log::print("own actions: %d", seq.isOwnedActions() ? 1 : 0);
}

void testerScript::onUpdate() {
    if (logged) {
        return;
    }
    logged = true;
    Animation seq(getScene(), seqEntity);
    Log::print("frames: %d, owned: %d", (int)seq.getActionFrameSize(), seq.isOwnedActions() ? 1 : 0);
}
