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

    DPROPERTY("Strafe Speed")
    float strafeSpeed = 120.0f;

    DPROPERTY("Dot Position")
    doriax::Vector2 dotPosition = doriax::Vector2::ZERO;

    void onViewLoaded();
    void onUpdate();
};
