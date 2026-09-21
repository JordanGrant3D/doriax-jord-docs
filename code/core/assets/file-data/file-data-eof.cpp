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
    unsigned int chunks = 0;
    unsigned char chunk[32];
    while (!config->eof()) {
        if (config->read(chunk, sizeof(chunk)) == 0) {
            break;
        }
        chunks++;
    }
    Log::print("tutorial config chunks drained: %u", chunks);
    delete config;
}
