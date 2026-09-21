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
    savedFacing = obj.getRotation();
}

void testerScript::onUpdate() {
    // Work on the copy; the tuned facing stays pristine.
    workFacing = savedFacing;

    Log::print(("work: " + workFacing.toString()).c_str());
}
