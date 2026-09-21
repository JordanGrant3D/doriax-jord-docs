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

    DPROPERTY("Lift Speed")
    float liftSpeed = 2.0f;

    DPROPERTY("Lift")
    bool lift = true;
    void onViewLoaded();
    void onUpdate();
};
