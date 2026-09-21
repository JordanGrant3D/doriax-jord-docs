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

    DPROPERTY("Dolly Speed")
    float dollySpeed = 3.0f;

    DPROPERTY("Push Forward")
    bool pushForward = true;
    void onViewLoaded();
    void onUpdate();
};
