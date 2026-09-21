#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Y FOV")
    float yfov = 1.0f;

    DPROPERTY("Aspect")
    float aspect = 1.77f;

    DPROPERTY("Clip Height")
    float clipHeight = 0.0f;

    void onUpdate();
};
