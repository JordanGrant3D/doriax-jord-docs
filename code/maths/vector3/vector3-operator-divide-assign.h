#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Velocity")
    doriax::Vector3 velocity = doriax::Vector3(8.0f, 0.0f, 8.0f);

    void onUpdate();
};
