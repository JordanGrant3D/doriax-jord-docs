#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Minimap")
    doriax::Rect minimap = doriax::Rect(1600.0f, 20.0f, 280.0f, 280.0f);

    DPROPERTY("Zoom")
    float zoom = 1.0f;

    void onUpdate();
};
