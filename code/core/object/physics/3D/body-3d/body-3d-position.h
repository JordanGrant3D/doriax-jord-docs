#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Body3D.h"
#include "Input.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Move Speed")
    float moveSpeed = 8.0f;

    DPROPERTY("Jump Force")
    float jumpForce = 7.0f;
    DPROPERTY("Spawn")
    doriax::Vector3 spawn = doriax::Vector3(0.0f, 10.0f, 0.0f);

    void onViewLoaded();
    void onUpdate();
};
