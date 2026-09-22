#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "AABB.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("First Point")
    doriax::Vector3 firstPoint = doriax::Vector3(-2.0f, 0.0f, -1.0f);

    DPROPERTY("Second Point")
    doriax::Vector3 secondPoint = doriax::Vector3(3.0f, 2.0f, 1.0f);

    void onUpdate();
};
