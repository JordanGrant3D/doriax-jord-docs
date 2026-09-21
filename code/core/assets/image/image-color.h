#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Image.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Team Color")
    Vector4 teamColor = Vector4(0.2f, 0.5f, 1.0f, 1.0f);

    void onViewLoaded();
    void onUpdate();
};
