#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Smooth Goal")
    doriax::Vector2 smoothGoal = doriax::Vector2(100.0f, 50.0f);

    DPROPERTY("Smooth Speed")
    float smoothSpeed = 5.0f;

    doriax::Vector2 smoothed = doriax::Vector2::ZERO;

    void onViewLoaded();
    void onUpdate();
};
