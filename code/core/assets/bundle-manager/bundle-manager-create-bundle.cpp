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

    Entity topLevel = BundleManager::createBundle(bundleName, scene);
    Log::print("tutorial player spawned top-level: %u", topLevel);

    Entity byId = BundleManager::createBundle(9001, scene);
    Log::print("tutorial player spawned by id: %u", byId);

    Entity underSpawn = BundleManager::createBundle(bundleName, scene, "spawn");
    Log::print("tutorial player spawned under spawn: %u", underSpawn);

    Entity underHandle = BundleManager::createBundle(bundleName, *this);
    Log::print("tutorial player spawned under handle: %u", underHandle);

    Entity underEntity = BundleManager::createBundle(bundleName, scene, getEntity());
    Log::print("tutorial player spawned under entity: %u", underEntity);
}
