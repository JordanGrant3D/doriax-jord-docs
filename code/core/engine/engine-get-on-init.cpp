#include "testerScript.h"
#include "Log.h"

using namespace doriax;

static void probeInit() {
}

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    if (hookInit) {
        hookInit = false;
        Engine::getOnInit().add("tester_probe", &probeInit);
        Log::print("init hook registered");
    }
}
