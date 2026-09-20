#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Input.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Second Touch")
    doriax::Vector2 secondTouch = doriax::Vector2(400.0f, 300.0f);

    void onUpdate();
};
