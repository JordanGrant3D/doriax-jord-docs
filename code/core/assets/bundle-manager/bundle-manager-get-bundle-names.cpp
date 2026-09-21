#include "testerScript.h"
#include "Log.h"
#include "BundleManager.h"
#include <string>
#include <vector>

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    std::vector<std::string> names = BundleManager::getBundleNames();
    for (const std::string& name : names) {
        if (name.rfind(bundleFilter, 0) == 0) {
            Log::print("replay bundle: %s", name.c_str());
        }
    }
    Log::print("total bundles: %u", (unsigned int)names.size());
}
