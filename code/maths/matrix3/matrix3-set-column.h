#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Lean")
    doriax::Vector3 lean = doriax::Vector3(0.2f, 1.0f, 0.0f);

    doriax::Matrix3 pose;

    void onUpdate();
};
