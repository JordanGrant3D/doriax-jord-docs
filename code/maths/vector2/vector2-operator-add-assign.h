#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Look Accumulator")
    doriax::Vector2 lookAccum = doriax::Vector2::ZERO;

    DPROPERTY("Nudge")
    float nudge = 1.0f;

    void onViewLoaded();
    void onUpdate();
};
