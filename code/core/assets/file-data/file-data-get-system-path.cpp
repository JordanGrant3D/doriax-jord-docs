#include "testerScript.h"
#include "Log.h"
#include "FileData.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    std::string real = FileData::getSystemPath("data://saves/tutorial_slot0.json");
    Log::print("tutorial save system path: %s", real.c_str());
}
