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

    doriax::Vector3 targetPoint = doriax::Vector3(5.0f, 0.0f, 0.0f);
    doriax::Vector3 insidePoint = doriax::Vector3(0.0f, 0.0f, 0.0f);

    void onUpdate();
};
