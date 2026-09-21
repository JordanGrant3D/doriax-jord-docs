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
    save.writeString("tutorial_checkpoint=3");
    save.flush();
    save.close();
    Log::print("tutorial save closed");
}
