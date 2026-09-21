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

    DPROPERTY("Pick X")
    float pickX = 400.0f;

    DPROPERTY("Pick Y")
    float pickY = 300.0f;
    void onViewLoaded();
    void onUpdate();
};
