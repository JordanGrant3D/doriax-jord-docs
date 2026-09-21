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
    std::string text = config->readString();
    Log::print("tutorial config bytes: %u", (unsigned int)text.size());
    delete config;
    Log::print("tutorial config stream released");
}
