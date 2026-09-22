#pragma once
#include "Shape.h"
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

    DPROPERTY("Icy Friction")
    float icyFriction = 0.0f;

    DPROPERTY("Grip Friction")
    float gripFriction = 1.0f;

    void onViewLoaded();
    void onUpdate();
};
