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
    FileData* replay = FileData::newFile(replayPath.c_str(), true);
    unsigned int timestamp = replay->read32();
    Log::print("tutorial replay checkpoint timestamp: %u", timestamp);
    delete replay;
}
