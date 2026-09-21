#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Yaw Degrees")
    float yawDegrees = 45.0f;

    doriax::Matrix3 savedFacing;
    doriax::Matrix3 workFacing;

    void onViewLoaded();
    void onUpdate();
};
