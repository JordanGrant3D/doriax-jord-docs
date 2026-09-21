#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Popup")
    doriax::Rect popup = doriax::Rect(1800.0f, 1000.0f, 300.0f, 200.0f);

    DPROPERTY("Screen")
    doriax::Rect screen = doriax::Rect(0.0f, 0.0f, 1920.0f, 1080.0f);

    void onUpdate();
};
