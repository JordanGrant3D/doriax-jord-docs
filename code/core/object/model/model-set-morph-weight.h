#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Model.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Smile Weight")
    float smileWeight = 0.8f;

    DPROPERTY("Blink Weight")
    float blinkWeight = 1.0f;
    void onViewLoaded();
};
