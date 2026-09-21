#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Lift")
    float lift = 2.0f;

    doriax::Matrix3 basis;

    void onViewLoaded();
    void onUpdate();
};
