#include "testerScript.h"
#include "Log.h"
#include "File.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    File replay(replayPath.c_str(), false);
    replay.seek(0);
    unsigned int header = replay.read32();
    Log::print("tutorial replay header: %u", header);
    replay.seek(0);
    Log::print("replay cursor rewound to %u", replay.pos());
    replay.close();
}
