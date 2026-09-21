#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Interact Radius")
    float interactRadius = 2.0f;

    DPROPERTY("Lever Position")
    doriax::Vector3 leverPosition = doriax::Vector3(1.5f, 1.0f, 0.0f);

    void onUpdate();
};
