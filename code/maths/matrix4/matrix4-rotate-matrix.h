#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Spin Degrees")
    float spinDegrees = 90.0f;

    DPROPERTY("Yaw")
    float yaw = 0.8f;

    DPROPERTY("Pitch")
    float pitch = -0.5f;

    void onUpdate();
};
