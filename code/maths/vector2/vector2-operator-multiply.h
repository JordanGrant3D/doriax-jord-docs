#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Axis Sensitivity")
    doriax::Vector2 axisSensitivity = doriax::Vector2(0.2f, 0.15f);

    DPROPERTY("Look Sensitivity")
    float lookSensitivity = 1.0f;

    void onUpdate();
};
