#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Crouch")
    float crouch = 0.8f;

    DPROPERTY("Bulk")
    doriax::Vector3 bulk = doriax::Vector3(1.2f, 1.0f, 1.2f);

    void onUpdate();
};
