#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Blend Weights")
    doriax::Vector4 blendWeights = doriax::Vector4(0.5f, 0.5f, 0.5f, 0.5f);

    DPROPERTY("Drain Rate")
    float drainRate = 0.5f;

    void onViewLoaded();
    void onUpdate();
};
