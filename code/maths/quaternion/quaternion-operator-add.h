#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Blend")
    float blend = 0.5f;

    doriax::Quaternion poseA;
    doriax::Quaternion poseB;

    void onViewLoaded();
    void onUpdate();
};
