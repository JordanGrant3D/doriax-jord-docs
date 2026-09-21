#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Start Button")
    doriax::Rect startButton = doriax::Rect(860.0f, 500.0f, 200.0f, 60.0f);

    void onUpdate();
};
