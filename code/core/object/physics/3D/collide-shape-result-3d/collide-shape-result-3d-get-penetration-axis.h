#pragma once
#include "Shape.h"
#include "EntityHandle.h"
#include "ScriptProperty.h"
#include "Object.h"
#include "Body3D.h"
#include "CollideShapeResult3D.h"
#include "Engine.h"

class testerScript : public doriax::EntityHandle {
public:
    testerScript(doriax::Scene* scene, doriax::Entity entity);
    virtual ~testerScript();

    DPROPERTY("Ground Normal Y")
    float groundNormalY = 0.7f;
    void onViewLoaded();
    void onUpdate();
    bool onShouldCollide(doriax::Body3D self, doriax::Body3D other, doriax::Vector3 baseOffset, doriax::CollideShapeResult3D result);
};
