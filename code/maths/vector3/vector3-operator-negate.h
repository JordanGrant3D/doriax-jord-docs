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

    doriax::Vector3 forward = doriax::Vector3(0.0f, 0.0f, -1.0f);
    float speed = 5.0f;

    void onUpdate();
};
