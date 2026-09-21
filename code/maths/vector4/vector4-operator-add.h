#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Base Tint")
    doriax::Vector4 baseTint = doriax::Vector4(0.4f, 0.4f, 0.4f, 1.0f);

    DPROPERTY("Brightness Lift")
    float brightnessLift = 0.1f;

    void onUpdate();
};
