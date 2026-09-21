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
    PrimitiveType body = mesh.getPrimitiveType();
    mesh.setPrimitiveType(unsigned(debugSubmesh), mesh.getPrimitiveType(unsigned(debugSubmesh)));
    mesh.setPrimitiveType(body);
    Log::print("primitive type debug check done");
}
