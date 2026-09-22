#include "testerScript.h"

#include "Body2D.h"
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
    Body2D body = obj.getBody2D();
    body.createCircleShape(Vector2(16.0f, 16.0f), 16.0f);
    body.createCenteredBoxShape(64.0f, 64.0f);
    body.setType(BodyType::DYNAMIC);
    body.load();
}

void testerScript::onUpdate() {
    Object obj(getScene(), getEntity());
    Body2D body = obj.getBody2D();
    const uint16_t layerPlayer = 0x0001;
    body.setCategoryBitsFilter(layerPlayer);
    body.setCategoryBitsFilter(1, layerPlayer);
    uint16_t category = body.getCategoryBitsFilter();
    uint16_t indexedCategory = body.getCategoryBitsFilter(1);
    Log::print(category == indexedCategory ? "player category set" : "category mismatch");
}
