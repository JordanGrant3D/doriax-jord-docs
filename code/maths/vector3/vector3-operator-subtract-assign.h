#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"
#include "Input.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    float moveSpeed = 8.0f;

    void onUpdate();
};
