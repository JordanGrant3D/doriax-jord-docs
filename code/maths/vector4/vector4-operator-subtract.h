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
    doriax::Vector4 blendWeights = doriax::Vector4(0.0f, 1.0f, 0.0f, 0.0f);

    DPROPERTY("Fade Amount")
    float fadeAmount = 2.0f;

    void onUpdate();
};
