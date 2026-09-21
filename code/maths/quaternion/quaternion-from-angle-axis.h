#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Spin Speed")
    float spinSpeed = 90.0f;

    DPROPERTY("Spin Angle")
    float spinAngle = 0.0f;

    void onUpdate();
};
