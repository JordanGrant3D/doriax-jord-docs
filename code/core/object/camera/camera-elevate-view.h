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

    DPROPERTY("Tilt Speed")
    float tiltSpeed = 30.0f;

    DPROPERTY("Auto Tilt")
    bool autoTilt = true;
    void onViewLoaded();
    void onUpdate();
};
