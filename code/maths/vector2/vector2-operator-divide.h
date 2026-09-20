#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Screen Size")
    doriax::Vector2 screenSize = doriax::Vector2(1920.0f, 1080.0f);

    void onUpdate();
};
