#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Canvas Width")
    int canvasW = 1000;

    DPROPERTY("Canvas Height")
    int canvasH = 480;

    DPROPERTY("Apply Size")
    bool applySize = false;

    void onUpdate();
};
