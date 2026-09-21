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
    unsigned int frameLength = replay->read16();
    Log::print("tutorial replay frame length: %u", frameLength);
    delete replay;
}
