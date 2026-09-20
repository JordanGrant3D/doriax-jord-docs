#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Point A")
    doriax::Vector3 pointA = doriax::Vector3(-5.0f, 1.0f, 0.0f);

    DPROPERTY("Point B")
    doriax::Vector3 pointB = doriax::Vector3(5.0f, 1.0f, 0.0f);
    float blend = 0.0f;

    void onUpdate();
};
