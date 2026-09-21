#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Camera Distance")
    float cameraDistance = 8.0f;

    DPROPERTY("Camera Height")
    float cameraHeight = 4.0f;

    void onUpdate();
};
