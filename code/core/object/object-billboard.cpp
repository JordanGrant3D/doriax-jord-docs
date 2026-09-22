#include "testerScript.h"
#include "Object.h"
#include "Log.h"
#include "Engine.h"

using namespace doriax;

testerScript::testerScript(Scene* scene, Entity entity): EntityHandle(scene, entity) {
    REGISTER_ENGINE_EVENT(onViewLoaded);
    REGISTER_ENGINE_EVENT(onUpdate);
}

testerScript::~testerScript() {
}

void testerScript::onViewLoaded() {
    Object obj(getScene(), getEntity());
    obj.setBillboard(true);
    obj.setFakeBillboard(fake);
    obj.setCylindricalBillboard(cylindrical);
    Log::print("billboard enabled");
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    obj.setBillboard(true, fake, cylindrical);
    if (obj.isBillboard()) {
        Log::print("billboard active");
    }
    if (obj.isFakeBillboard()) {
        Log::print("fake billboard active");
    }
    if (obj.isCylindricalBillboard()) {
        Log::print("cylindrical billboard active");
    }
}
