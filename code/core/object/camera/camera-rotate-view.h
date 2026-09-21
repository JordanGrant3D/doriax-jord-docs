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

    DPROPERTY("Look Speed")
    float lookSpeed = 60.0f;

    DPROPERTY("Free Look")
    bool freeLook = true;
    void onViewLoaded();
    void onUpdate();
};
