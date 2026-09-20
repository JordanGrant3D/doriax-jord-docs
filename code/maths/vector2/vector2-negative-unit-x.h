#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Cursor")
    doriax::Vector2 cursor = doriax::Vector2::ZERO;

    DPROPERTY("Step Size")
    float stepSize = 1.0f;

    void onViewLoaded();
    void onUpdate();
};
