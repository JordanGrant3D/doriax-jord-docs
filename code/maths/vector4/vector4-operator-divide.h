#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Raw Weights")
    doriax::Vector4 rawWeights = doriax::Vector4(2.0f, 4.0f, 1.0f, 3.0f);

    DPROPERTY("Channel Max")
    doriax::Vector4 channelMax = doriax::Vector4(4.0f, 4.0f, 4.0f, 4.0f);

    void onUpdate();
};
