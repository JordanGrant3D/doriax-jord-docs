#pragma once
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Body2D.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Linear Damping")
    float linearDamping = 0.5f;

    DPROPERTY("Angular Damping")
    float angularDamping = 0.5f;

    void onViewLoaded();
    void onUpdate();
};
