#include "testerScript.h"
#include "Log.h"
#include "FileData.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    FileData* config = FileData::newFile(configPath.c_str(), true);
    unsigned int total = config->length();
    Log::print("tutorial config total bytes: %u", total);
    delete config;
}
