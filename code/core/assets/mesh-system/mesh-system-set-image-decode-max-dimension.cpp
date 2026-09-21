#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    MeshSystem::setImageDecodeMaxDimension(thumbCap);
    MeshSystem::setImageDecodeMaxDimension(0);
    Log::print("thumbnail decode cap cycled");
}
