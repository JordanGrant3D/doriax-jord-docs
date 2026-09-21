#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Tint")
    doriax::Vector4 tint = doriax::Vector4(1.0f, 0.9f, 0.8f, 1.0f);

    DPROPERTY("Channel Mask")
    doriax::Vector4 channelMask = doriax::Vector4(1.0f, 1.0f, 1.0f, 1.0f);

    DPROPERTY("Intensity")
    float intensity = 0.9f;

    void onUpdate();
};
