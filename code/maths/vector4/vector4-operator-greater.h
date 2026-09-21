#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Blend Weights")
    doriax::Vector4 blendWeights = doriax::Vector4(0.5f, 0.5f, 0.5f, 0.5f);

    DPROPERTY("Activation Floor")
    doriax::Vector4 activationFloor = doriax::Vector4(0.05f, 0.05f, 0.05f, 0.05f);

    void onUpdate();
};
