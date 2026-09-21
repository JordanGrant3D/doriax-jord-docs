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
    File save;
    unsigned int result = save.open(saveSlot.c_str(), true);
    if (result == FILEDATA_OK) {
        Log::print("save slot ready: %s", saveSlot.c_str());
        save.close();
    } else {
        Log::print("save slot unavailable: %s (%u)", saveSlot.c_str(), result);
    }
}
