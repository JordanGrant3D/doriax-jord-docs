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

    DPROPERTY("Zoom Speed")
    float zoomSpeed = 4.0f;

    DPROPERTY("Max Distance")
    float maxDistance = 10.0f;
    void onViewLoaded();
    void onUpdate();
};
