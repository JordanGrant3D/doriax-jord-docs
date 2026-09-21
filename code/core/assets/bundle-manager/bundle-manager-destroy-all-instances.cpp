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
    Scene* scene = getScene();
    BundleManager::createBundle(bundleName, scene);
    BundleManager::createBundle(bundleName, scene);
    BundleManager::destroyAllInstances(scene);
    Log::print("tutorial scene bundles torn down");
}
