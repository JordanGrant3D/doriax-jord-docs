#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "subsystem/PhysicsSystem.h"
#include "Body3D.h"

#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Capsule Height")
    float capsuleHeight = 1.7f;

    DPROPERTY("Capsule Radius")
    float capsuleRadius = 0.35f;

    void onViewLoaded();
    void onUpdate();
};
