#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
#include "Engine.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Banner")
    doriax::Rect banner = doriax::Rect(-400.0f, 20.0f, 400.0f, 60.0f);

    DPROPERTY("Slide Speed")
    float slideSpeed = 600.0f;

    void onUpdate();
};
