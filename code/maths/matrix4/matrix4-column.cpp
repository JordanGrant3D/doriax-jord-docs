#include "testerScript.h"

#include "Matrix4.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Matrix4 pose = Matrix4::translateMatrix(obj.getPosition());

    // Translation column doubles as the world-space origin point.
    Vector4 origin = pose.column(column > 3 ? 3 : column);

    Log::print(("origin: " + origin.toString()).c_str());
}
