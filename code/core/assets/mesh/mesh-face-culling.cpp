#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Mesh mesh(getScene(), getEntity());
    mesh.setFaceCulling(unsigned(capeSubmesh), false);
    bool body = mesh.isFaceCulling();
    mesh.setFaceCulling(body);
    Log::print("cape face culling disabled");
}
