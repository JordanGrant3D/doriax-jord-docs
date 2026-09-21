#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Saved Layout")
    doriax::Rect savedLayout = doriax::Rect(100.0f, 100.0f, 200.0f, 60.0f);

    DPROPERTY("Packed Layout")
    doriax::Vector4 packedLayout = doriax::Vector4(100.0f, 100.0f, 200.0f, 60.0f);

    doriax::Rect panel;

    void onViewLoaded();
    void onUpdate();
};
