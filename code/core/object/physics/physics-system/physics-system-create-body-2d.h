#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "subsystem/PhysicsSystem.h"
#include "Body2D.h"

#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Body Width")
    float bodyWidth = 1.0f;

    DPROPERTY("Body Height")
    float bodyHeight = 1.8f;

    void onViewLoaded();
    void onUpdate();
};
