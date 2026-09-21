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

    DPROPERTY("Sort Transparent")
    bool sortTransparent = true;

    DPROPERTY("Follow Distance")
    float followDistance = 6.0f;
    void onViewLoaded();
    void onUpdate();
};
