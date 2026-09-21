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
    if (fixWinding) {
        mesh.setWindingOrder(WindingOrder::CCW);
    }
    WindingOrder order = mesh.getWindingOrder();
    (void)order;
    Log::print("winding order verified");
}
