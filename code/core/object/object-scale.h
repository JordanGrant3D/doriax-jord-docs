#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Uniform Scale")
    float uniformScale = 2.0f;

    DPROPERTY("Stretch Y")
    float stretchY = 2.0f;
    void onViewLoaded();
    void onUpdate();
};
