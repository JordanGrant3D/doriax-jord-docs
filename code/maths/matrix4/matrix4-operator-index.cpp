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
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());

    // Read the translation Y through the const overload.
    const Matrix4& pose = hover;
    float ty = pose[3][1];
    (void)ty;

    // Write the hover height straight into column 3.
    hover = Matrix4::translateMatrix(obj.getPosition());
    hover[3][1] = hoverHeight;

    Log::print(("hover: " + hover.toString()).c_str());
}
