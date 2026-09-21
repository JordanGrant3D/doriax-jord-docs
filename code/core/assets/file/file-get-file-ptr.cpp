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
    FILE* raw = save.getFilePtr();
    if (raw != nullptr) {
        Log::print("tutorial save raw position: %ld", ftell(raw));
    } else {
        Log::print("tutorial save has no raw handle");
    }
    save.close();
}
