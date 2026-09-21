#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    tuned = Matrix4::translateMatrix(10.0f, 0.0f, 6.0f);
}

void testerScript::onUpdate() {
    Matrix4 live = Matrix4::translateMatrix(10.0f, 0.0f, 6.0f);

    if (live == tuned) {
        Log::print("live pose matches the tuned spawn");
    }
}
