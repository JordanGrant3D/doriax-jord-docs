#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    Matrix4 local = obj.getLocalMatrix();
    Matrix4 model = obj.getModelMatrix();
    Matrix4 normal = obj.getNormalMatrix();
    Log::print("local matrix read");
    Log::print("model matrix read");
    Log::print("normal matrix read");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    obj.setLocalMatrix(obj.getLocalMatrix());
    Log::print("local matrix applied");
}
