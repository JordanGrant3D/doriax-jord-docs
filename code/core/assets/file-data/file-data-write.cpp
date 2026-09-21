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
    const char* checkpoint = "tutorial_checkpoint=3";
    unsigned int written = save->write((unsigned char*)checkpoint, 21);
    Log::print("tutorial checkpoint bytes written: %u", written);
    delete save;
}
