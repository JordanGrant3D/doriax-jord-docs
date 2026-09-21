#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Body2D.h"
#include "Contact2D.h"
#include "Manifold2D.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Step Height")
    float stepHeight = 0.5f;
    void onViewLoaded();
    void onUpdate();
};
