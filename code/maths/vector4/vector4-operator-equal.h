#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Target Pose")
    doriax::Vector4 targetPose = doriax::Vector4(0.0f, 1.0f, 0.0f, 0.0f);

    DPROPERTY("Blend Weights")
    doriax::Vector4 blendWeights = doriax::Vector4::ZERO;

    void onViewLoaded();
    void onUpdate();
};
