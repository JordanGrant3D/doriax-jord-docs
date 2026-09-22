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

    DPROPERTY("Dead Restitution")
    float deadRestitution = 0.0f;

    DPROPERTY("Bounce Restitution")
    float bounceRestitution = 0.8f;

    void onViewLoaded();
    void onUpdate();
};
