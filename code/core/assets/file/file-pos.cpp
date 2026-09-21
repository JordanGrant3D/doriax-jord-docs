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
    unsigned char chunk[32];
    save.read(chunk, sizeof(chunk));
    float progress = total > 0 ? (float)save.pos() / (float)total : 0.0f;
    Log::print("tutorial save loading progress: %f", progress);
    save.close();
}
