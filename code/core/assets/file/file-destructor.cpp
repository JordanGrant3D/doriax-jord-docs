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
    File* checkpoint = new File(saveSlot.c_str(), true);
    const char* text = "tutorial_checkpoint=3";
    checkpoint->write((unsigned char*)text, 21);
    checkpoint->flush();
    delete checkpoint;
    Log::print("tutorial checkpoint writer released");
}
