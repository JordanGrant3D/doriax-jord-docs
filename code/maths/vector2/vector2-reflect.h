#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Velocity")
    doriax::Vector2 velocity = doriax::Vector2(300.0f, -120.0f);

    DPROPERTY("Wall Normal")
    doriax::Vector2 wallNormal = doriax::Vector2(1.0f, 0.0f);

    DPROPERTY("Dot Position")
    doriax::Vector2 dotPosition = doriax::Vector2::ZERO;

    void onViewLoaded();
    void onUpdate();
};
