#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Clip Position")
    doriax::Vector4 clipPosition = doriax::Vector4(2.0f, 3.0f, 4.0f, 2.0f);

    void onUpdate();
};
