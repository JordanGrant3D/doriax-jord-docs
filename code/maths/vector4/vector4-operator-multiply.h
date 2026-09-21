#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Base Tint")
    doriax::Vector4 baseTint = doriax::Vector4(1.0f, 0.8f, 0.6f, 1.0f);

    DPROPERTY("Channel Mask")
    doriax::Vector4 channelMask = doriax::Vector4(1.0f, 1.0f, 1.0f, 1.0f);

    DPROPERTY("Intensity")
    float intensity = 0.8f;

    void onUpdate();
};
