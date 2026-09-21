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
    FileData* staged = FileData::newFile(false);
    staged->writeString("moveSpeed=8.0");
    Log::print("staged tutorial config bytes: %u", staged->length());

    FileData* saved = FileData::newFile(configPath.c_str(), true);
    Log::print("tutorial config stream size: %u", saved->length());

    delete staged;
    delete saved;
}
