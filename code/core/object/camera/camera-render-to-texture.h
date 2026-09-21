#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Camera.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Mirror Enabled")
    bool mirrorEnabled = true;

    DPROPERTY("Mirror Size")
    int mirrorSize = 512;
    void onViewLoaded();
    void onUpdate();
};
