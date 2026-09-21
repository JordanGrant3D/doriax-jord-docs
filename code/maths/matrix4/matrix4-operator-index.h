#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Hover Height")
    float hoverHeight = 2.0f;

    doriax::Matrix4 hover;

    void onViewLoaded();
    void onUpdate();
};
