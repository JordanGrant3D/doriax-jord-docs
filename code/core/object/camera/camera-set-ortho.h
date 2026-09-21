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

    DPROPERTY("Ortho Width")
    float orthoWidth = 800.0f;

    DPROPERTY("Ortho Height")
    float orthoHeight = 600.0f;
    void onViewLoaded();
    void onUpdate();
};
