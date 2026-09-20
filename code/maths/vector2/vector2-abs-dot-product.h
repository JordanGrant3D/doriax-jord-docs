#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Reference Axis")
    doriax::Vector2 referenceAxis = doriax::Vector2(1.0f, 0.0f);

    void onUpdate();
};
