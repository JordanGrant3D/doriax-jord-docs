#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Chase Speed")
    float chaseSpeed = 400.0f;

    doriax::Vector2 chaser = doriax::Vector2::ZERO;

    void onViewLoaded();
    void onUpdate();
};
