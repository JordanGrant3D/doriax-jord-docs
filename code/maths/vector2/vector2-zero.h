#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Look Sensitivity")
    float lookSensitivity = 0.2f;

    doriax::Vector2 lookDelta = doriax::Vector2::ZERO;

    void onUpdate();
};
