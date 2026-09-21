#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Camera.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Approach Speed")
    float approachSpeed = 2.0f;

    DPROPERTY("Min Distance")
    float minDistance = 3.0f;
    void onViewLoaded();
    void onUpdate();
};
