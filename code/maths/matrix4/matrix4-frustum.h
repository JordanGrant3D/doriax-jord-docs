#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Near")
    float nearPlane = 0.1f;

    DPROPERTY("Far")
    float farPlane = 100.0f;

    DPROPERTY("Skew")
    float skew = 0.5f;

    void onUpdate();
};
