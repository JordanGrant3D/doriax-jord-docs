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
    unsigned int frames = 0;
    unsigned char frame[16];
    while (!replay.eof()) {
        unsigned int got = replay.read(frame, sizeof(frame));
        if (got == 0) {
            break;
        }
        frames++;
    }
    Log::print("tutorial replay frames: %u", frames);
    replay.close();
}
