#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Blend A")
    doriax::Vector4 blendA = doriax::Vector4::UNIT_X;

    DPROPERTY("Blend B")
    doriax::Vector4 blendB = doriax::Vector4::UNIT_Y;

    void onViewLoaded();
    void onUpdate();
};
