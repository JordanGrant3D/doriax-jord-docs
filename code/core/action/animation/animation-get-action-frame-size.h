#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Animation.h"
#include "PositionAction.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Step Distance")
    float stepDistance = 5.0f;

    DPROPERTY("Second Step Delay")
    float secondStart = 1.0f;

    doriax::Entity seqEntity = 0;
    bool logged = false;
    void onViewLoaded();
    void onUpdate();
};
