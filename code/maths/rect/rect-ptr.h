#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Viewport")
    doriax::Rect viewport = doriax::Rect(0.0f, 0.0f, 1920.0f, 1080.0f);

    void onUpdate();
};
