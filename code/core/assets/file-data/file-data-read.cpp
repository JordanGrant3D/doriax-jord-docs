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
    unsigned char state[64];
    unsigned int got = save->read(state, sizeof(state));
    Log::print("tutorial save state bytes: %u", got);
    delete save;
}
