#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Deadzone")
    float deadzone = 0.2f;

    DPROPERTY("Recenter")
    doriax::Vector2 recenter = doriax::Vector2::ZERO;

    void onUpdate();
};
