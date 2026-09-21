#pragma once

#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Scale")
    doriax::Vector3 scale = doriax::Vector3(2.0f, 2.0f, 2.0f);

    void onUpdate();
};
