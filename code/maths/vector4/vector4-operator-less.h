#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Blend Weights")
    doriax::Vector4 blendWeights = doriax::Vector4(0.2f, 0.2f, 0.2f, 0.2f);

    DPROPERTY("Weight Cap")
    doriax::Vector4 weightCap = doriax::Vector4(1.0f, 1.0f, 1.0f, 1.0f);

    void onUpdate();
};
