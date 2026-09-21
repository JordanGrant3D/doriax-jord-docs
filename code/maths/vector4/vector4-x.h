#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Tint")
    doriax::Vector4 tint = doriax::Vector4(1.0f, 1.0f, 1.0f, 1.0f);

    DPROPERTY("Red Pulse Speed")
    float redPulseSpeed = 2.0f;

    void onUpdate();
};
