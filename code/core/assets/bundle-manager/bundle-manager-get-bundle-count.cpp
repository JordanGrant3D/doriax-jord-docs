#include "testerScript.h"
#include "Log.h"
#include "BundleManager.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    int count = BundleManager::getBundleCount();
    Log::print("registered replay bundles: %d", count);
}
