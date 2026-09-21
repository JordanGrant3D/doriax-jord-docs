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
    std::string ext = FileData::getFilePathExtension(saveSlot);
    if (ext == "json") {
        Log::print("tutorial save has config extension: %s", ext.c_str());
    } else {
        Log::print("unexpected tutorial save extension: %s", ext.c_str());
    }
}
