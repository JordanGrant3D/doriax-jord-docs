#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Yaw")
    float camYaw = 0.0f;

    DPROPERTY("Pitch")
    float camPitch = -30.0f;

    void onUpdate();
};
