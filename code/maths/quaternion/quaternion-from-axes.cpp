#include "testerScript.h"

#include "Quaternion.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    Vector3 xaxis = right;
    Vector3 yaxis = up;
    Vector3 zaxis = forward;

    // Array overload: three contiguous axes.
    Vector3 axes[3] = { xaxis, yaxis, zaxis };
    Quaternion fromArray;
    fromArray.fromAxes(axes);

    // Explicit-axis overload: same basis, named arguments.
    Quaternion fromNamed;
    fromNamed.fromAxes(xaxis, yaxis, zaxis);

    obj.setRotation(fromNamed);
    Log::print(("basis equal: " + std::to_string(fromArray == fromNamed)).c_str());
}
