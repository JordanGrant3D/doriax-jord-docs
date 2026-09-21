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
    unsigned int total = save.length();
    Log::print("tutorial save total bytes: %u", total);
    save.close();
}
