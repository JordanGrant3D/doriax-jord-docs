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
    BundleManager::registerBundle(9001, bundleName,
        [](Scene* scene, Entity root) -> bool {
            Log::print("tutorial player bundle factory ran");
            return true;
        });
    Log::print("registered tutorial bundle: %s", bundleName.c_str());
}
