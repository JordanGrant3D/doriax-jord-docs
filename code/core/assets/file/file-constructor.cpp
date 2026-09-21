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
    File deferred;
    deferred.open(saveSlot.c_str(), true);
    deferred.close();

    File direct(saveSlot.c_str(), false);
    Log::print("tutorial save opened, size %u", direct.length());
    direct.close();
}
