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

    DPROPERTY("Ground Normal Y")
    float groundNormalY = 0.7f;
    void onViewLoaded();
    void onUpdate();
};
