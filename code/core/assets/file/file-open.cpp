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
        save.writeString("tutorial_checkpoint=3");
        Log::print("tutorial save opened for writing");
    } else {
        Log::print("failed to open tutorial save (%u)", result);
    }
    save.close();
}
