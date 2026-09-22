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
    const uint16_t layerEnemy = 0x0002;
    const uint16_t layerWall = 0x0004;
    body.setMaskBitsFilter(layerEnemy | layerWall);
    body.setMaskBitsFilter(1, layerEnemy | layerWall);
    uint16_t mask = body.getMaskBitsFilter();
    uint16_t indexedMask = body.getMaskBitsFilter(1);
    Log::print(mask == indexedMask ? "enemy and wall mask set" : "mask mismatch");
}
