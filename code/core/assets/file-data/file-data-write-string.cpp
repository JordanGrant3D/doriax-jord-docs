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
    FileData* save = FileData::newFile(saveSlot.c_str(), true);
    unsigned int written = save->writeString("tutorial_checkpoint=3");
    Log::print("tutorial checkpoint json bytes: %u", written);
    delete save;
}
