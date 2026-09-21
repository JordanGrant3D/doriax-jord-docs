#include "testerScript.h"

#include "Rect.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onUpdate() {
    Rect fitted = popup;

    // Pull the overhanging popup back inside the screen in place.
    fitted.fitOnRect(screen);

    Log::print(("fitted popup: " + fitted.toString()).c_str());
}
