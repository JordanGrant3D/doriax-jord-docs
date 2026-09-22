#pragma once
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Body2D.h"
#include "Input.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Move Speed")
    float moveSpeed = 300.0f;

    void onViewLoaded();
    void onFixedUpdate();
    void onUpdate();
};
