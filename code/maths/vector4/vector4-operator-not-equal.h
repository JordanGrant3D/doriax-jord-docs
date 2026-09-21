#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Blend Weights")
    doriax::Vector4 blendWeights = doriax::Vector4::UNIT_X;

    doriax::Vector4 lastWeights = doriax::Vector4::UNIT_X;

    void onViewLoaded();
    void onUpdate();
};
