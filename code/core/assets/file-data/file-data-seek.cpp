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
    replay->seek(0);
    unsigned int header = replay->read32();
    Log::print("tutorial replay header: %u", header);
    replay->seek(0);
    Log::print("replay cursor rewound to %u", replay->pos());
    delete replay;
}
