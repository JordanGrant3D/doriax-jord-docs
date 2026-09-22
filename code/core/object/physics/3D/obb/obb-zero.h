#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"
#include "Engine.h"
#include "OBB.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    doriax::Vector3 firstPoint = doriax::Vector3(-2.0f, 0.0f, -1.0f);
    doriax::Vector3 secondPoint = doriax::Vector3(3.0f, 2.0f, 1.0f);

    void onUpdate();
};
