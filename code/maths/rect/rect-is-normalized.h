#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Sprite UV")
    doriax::Rect spriteUV = doriax::Rect(0.0f, 0.0f, 0.25f, 0.25f);

    void onUpdate();
};
