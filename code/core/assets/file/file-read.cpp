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
    File save(saveSlot.c_str(), false);
    unsigned char state[64];
    unsigned int got = save.read(state, sizeof(state));
    Log::print("tutorial save bytes read: %u", got);
    save.close();
}
