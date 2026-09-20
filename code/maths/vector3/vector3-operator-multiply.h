#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector3 direction = doriax::Vector3(1.0f, 0.0f, 0.0f);
    doriax::Vector3 axisScale = doriax::Vector3(1.0f, 2.0f, 1.0f);
    float speed = 6.0f;

    void onUpdate();
};
