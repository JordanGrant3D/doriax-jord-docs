#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector3 velocity = doriax::Vector3(5.0f, 0.0f, -2.0f);
    doriax::Vector3 wallNormal = doriax::Vector3(1.0f, 0.0f, 0.0f);

    void onUpdate();
};
