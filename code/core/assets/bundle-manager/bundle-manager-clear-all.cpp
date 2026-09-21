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
    BundleManager::clearAll();
    Log::print("replay bundles reset between tutorial runs");
    BundleManager::registerBundle(9001, bundleName,
        [](Scene* scene, Entity root) -> bool {
            return true;
        });
    Log::print("tutorial bundle re-registered, count: %d", BundleManager::getBundleCount());
}
