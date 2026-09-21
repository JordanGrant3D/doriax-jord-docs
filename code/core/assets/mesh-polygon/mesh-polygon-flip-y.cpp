#include "testerScript.h"
#include "Log.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    MeshPolygon emblem(getScene(), getEntity());
    emblem.setFlipY(flipBadge);
    bool flipped = emblem.isFlipY();
    (void)flipped;
    emblem.createPolygon();
    Log::print("badge flip synced");
}
