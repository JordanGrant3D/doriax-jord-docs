#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Raw W")
    float rawW = 1.0f;

    DPROPERTY("Raw X")
    float rawX = 0.0f;

    void onUpdate();
};
