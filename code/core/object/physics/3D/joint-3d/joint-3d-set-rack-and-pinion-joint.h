#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Body3D.h"
#include "Joint3D.h"
#include "Input.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Gate Height")
    float gateHeight = 4.0f;


    void onViewLoaded();
    void onUpdate();
};
