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
    Entity root = BundleManager::createBundle(bundleName, scene);
    bool destroyed = BundleManager::destroyBundle(scene, root);
    Log::print("tutorial player bundle destroyed: %d", (int)destroyed);
}
