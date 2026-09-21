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
    std::string full = config->readString();
    Log::print("tutorial config text bytes: %u", (unsigned int)full.size());
    config->seek(0);
    std::string head = config->readString(16);
    Log::print("tutorial config head bytes: %u", (unsigned int)head.size());
    delete config;
}
