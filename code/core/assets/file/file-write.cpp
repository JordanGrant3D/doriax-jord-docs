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
    File save(saveSlot.c_str(), true);
    const char* checkpoint = "tutorial_checkpoint=3";
    unsigned int written = save.write((unsigned char*)checkpoint, 21);
    Log::print("tutorial checkpoint bytes written: %u", written);
    save.flush();
    save.close();
}
