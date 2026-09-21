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
    File reader(saveSlot.c_str(), false);
    File shared;
    shared = reader;
    Log::print("shared tutorial save position: %u", shared.pos());
    reader.close();
}
