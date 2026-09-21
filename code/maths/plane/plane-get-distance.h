#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Ground Snap Height")
    float groundSnapHeight = 0.1f;

    DPROPERTY("Is Grounded")
    bool isGrounded = false;

    doriax::Plane ground = doriax::Plane(doriax::Vector3::UNIT_Y, 0.0f);

    void onUpdate();
};
