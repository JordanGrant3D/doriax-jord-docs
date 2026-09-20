#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector2 lastMousePos = doriax::Vector2::ZERO;
    bool firstMouse = true;

    DPROPERTY("Flick Threshold")
    float flickThreshold = 50.0f;

    void onUpdate();
};
