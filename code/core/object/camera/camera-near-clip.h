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

    DPROPERTY("Near Clip")
    float nearClip = 0.1f;

    DPROPERTY("Follow Height")
    float followHeight = 3.0f;
    void onViewLoaded();
    void onUpdate();
};
