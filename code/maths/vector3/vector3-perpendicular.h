#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "Object.h"
#include "Engine.h"
#include "Input.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    float dodgeSpeed = 7.0f;

    void onUpdate();
};
