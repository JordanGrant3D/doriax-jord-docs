[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
PhysicsSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## PhysicsSystem

`PhysicsSystem` drives the 2D (Box2D) and 3D (Jolt) simulations for a scene. It is created and owned by the [**Scene**](../../../../incomplete-docs.md); obtain it with `getScene()->getSystem<PhysicsSystem>()` and never construct one directly. The CharacterController tunes gravity per zone, registers bodies and joints during world setup, and configures broad-phase layers before the first simulation step.

**Inherits:** [**SubSystem**](../../../../incomplete-docs.md) (`doriax::SubSystem`)

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector2**](../../../maths/vector2/vector2.md) | [**gravity2D**](physics-system-gravity-2d.md) | 2D gravity in m/s². Defaults to `(0, -9.81)`. |
| [**Vector3**](../../../maths/vector3/vector3.md) | [**gravity3D**](physics-system-gravity-3d.md) | 3D gravity in m/s². Defaults to `(0, -9.81, 0)`. |
| [**Vector3**](../../../maths/vector3/vector3.md) | [**gravity**](physics-system-gravity.md) | Combined 2D + 3D gravity. Reads back the 3D value. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**pointsToMeterScale2D**](physics-system-points-to-meter-scale-2d.md) | Points per meter in 2D. Defaults to `64.0`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**lock3DBodies**](physics-system-lock-3d-bodies.md) | Take Jolt body locks on 3D access. Defaults to `true`. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../../../incomplete-docs.md)* scene | Created and owned by the scene. Use `getScene()->getSystem<PhysicsSystem>()` to access it. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createBody2D**](physics-system-create-body-2d.md) | [**Entity**](../../../ecs/entity.md) entity | Queues 2D body creation for an entity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeBody2D**](physics-system-remove-body-2d.md) | [**Entity**](../../../ecs/entity.md) entity | Removes the 2D body for an entity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**createBody3D**](physics-system-create-body-3d.md) | [**Entity**](../../../ecs/entity.md) entity | Queues 3D body creation for an entity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeBody3D**](physics-system-remove-body-3d.md) | [**Entity**](../../../ecs/entity.md) entity | Removes the 3D body for an entity. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadBody2D**](physics-system-load-body-2d.md) | [**Entity**](../../../ecs/entity.md) entity | Loads the 2D body now. Returns success. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroyBody2D**](physics-system-destroy-body-2d.md) | [**Body2DComponent**](../../../../incomplete-docs.md)& body | Destroys the live 2D body for a component. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadBody3D**](physics-system-load-body-3d.md) | [**Entity**](../../../ecs/entity.md) entity | Loads the 3D body now. Returns success. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroyBody3D**](physics-system-destroy-body-3d.md) | [**Body3DComponent**](../../../../incomplete-docs.md)& body | Destroys the live 3D body for a component. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroyShape2D**](physics-system-destroy-shape-2d.md) | [**Body2DComponent**](../../../../incomplete-docs.md)& body, [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Destroys a 2D shape by index. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroyShape3D**](physics-system-destroy-shape-3d.md) | [**Body3DComponent**](../../../../incomplete-docs.md)& body, [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Destroys a 3D shape by index. |
| `b2WorldId` | [**getWorld2D**](physics-system-world-2d.md) |  | Returns the raw Box2D world ID. |
| `JPH::PhysicsSystem*` | [**getWorld3D**](physics-system-world-3d.md) |  | Returns the raw Jolt physics system. |
| `JPH::EMotionQuality` | [**getBody3DMotionQualityToJolt**](physics-system-body-3d-motion-quality.md) | [**Body3DMotionQuality**](../../../../incomplete-docs.md) motionQuality | Maps motion quality to Jolt. Static. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadDistanceJoint2D**](physics-system-load-distance-joint-2d.md) | [**Entity**](../../../ecs/entity.md) entity, [**Joint2DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector2**](../../../maths/vector2/vector2.md) anchorA, [**Vector2**](../../../maths/vector2/vector2.md) anchorB, [**bool**](https://en.cppreference.com/cpp/keyword/bool) autoAnchors, [**bool**](https://en.cppreference.com/cpp/keyword/bool) rope | Loads a 2D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadRevoluteJoint2D**](physics-system-load-revolute-joint-2d.md) | [**Entity**](../../../ecs/entity.md) entity, [**Joint2DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector2**](../../../maths/vector2/vector2.md) anchor | Loads a 2D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadPrismaticJoint2D**](physics-system-load-prismatic-joint-2d.md) | [**Entity**](../../../ecs/entity.md) entity, [**Joint2DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector2**](../../../maths/vector2/vector2.md) anchor, [**Vector2**](../../../maths/vector2/vector2.md) axis | Loads a 2D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadMouseJoint2D**](physics-system-load-mouse-joint-2d.md) | [**Entity**](../../../ecs/entity.md) entity, [**Joint2DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector2**](../../../maths/vector2/vector2.md) target | Loads a 2D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadWheelJoint2D**](physics-system-load-wheel-joint-2d.md) | [**Entity**](../../../ecs/entity.md) entity, [**Joint2DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector2**](../../../maths/vector2/vector2.md) anchor, [**Vector2**](../../../maths/vector2/vector2.md) axis | Loads a 2D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadWeldJoint2D**](physics-system-load-weld-joint-2d.md) | [**Entity**](../../../ecs/entity.md) entity, [**Joint2DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector2**](../../../maths/vector2/vector2.md) anchor | Loads a 2D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadMotorJoint2D**](physics-system-load-motor-joint-2d.md) | [**Entity**](../../../ecs/entity.md) entity, [**Joint2DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB | Loads a 2D joint. Returns success. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroyJoint2D**](physics-system-destroy-joint-2d.md) | [**Joint2DComponent**](../../../../incomplete-docs.md)& joint | Destroys a live 2D joint. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadFixedJoint3D**](physics-system-load-fixed-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadDistanceJoint3D**](physics-system-load-distance-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector3**](../../../maths/vector3/vector3.md) anchorA, [**Vector3**](../../../maths/vector3/vector3.md) anchorB, [**bool**](https://en.cppreference.com/cpp/keyword/bool) autoAnchors | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadPointJoint3D**](physics-system-load-point-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector3**](../../../maths/vector3/vector3.md) anchor | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadHingeJoint3D**](physics-system-load-hinge-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector3**](../../../maths/vector3/vector3.md) anchor, [**Vector3**](../../../maths/vector3/vector3.md) axis, [**Vector3**](../../../maths/vector3/vector3.md) normal | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadConeJoint3D**](physics-system-load-cone-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector3**](../../../maths/vector3/vector3.md) anchor, [**Vector3**](../../../maths/vector3/vector3.md) twistAxis | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadPrismaticJoint3D**](physics-system-load-prismatic-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector3**](../../../maths/vector3/vector3.md) sliderAxis, [**float**](https://en.cppreference.com/cpp/keyword/float) limitsMin, [**float**](https://en.cppreference.com/cpp/keyword/float) limitsMax | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadSwingTwistJoint3D**](physics-system-load-swing-twist-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector3**](../../../maths/vector3/vector3.md) anchor, [**Vector3**](../../../maths/vector3/vector3.md) twistAxis, [**Vector3**](../../../maths/vector3/vector3.md) planeAxis, [**float**](https://en.cppreference.com/cpp/keyword/float) normalHalfConeAngle, [**float**](https://en.cppreference.com/cpp/keyword/float) planeHalfConeAngle, [**float**](https://en.cppreference.com/cpp/keyword/float) twistMinAngle, [**float**](https://en.cppreference.com/cpp/keyword/float) twistMaxAngle | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadSixDOFJoint3D**](physics-system-load-six-dof-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector3**](../../../maths/vector3/vector3.md) anchorA, [**Vector3**](../../../maths/vector3/vector3.md) anchorB, [**Vector3**](../../../maths/vector3/vector3.md) axisX, [**Vector3**](../../../maths/vector3/vector3.md) axisY | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadPathJoint3D**](physics-system-load-path-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, `std::vector<Vector3>` positions, `std::vector<Vector3>` tangents, `std::vector<Vector3>` normals, [**Vector3**](../../../maths/vector3/vector3.md) pathPosition, [**bool**](https://en.cppreference.com/cpp/keyword/bool) isLooping | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadGearJoint3D**](physics-system-load-gear-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Entity**](../../../ecs/entity.md) hingeA, [**Entity**](../../../ecs/entity.md) hingeB, [**int**](https://en.cppreference.com/cpp/keyword/int) numTeethGearA, [**int**](https://en.cppreference.com/cpp/keyword/int) numTeethGearB | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadRackAndPinionJoint3D**](physics-system-load-rack-and-pinion-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Entity**](../../../ecs/entity.md) hinge, [**Entity**](../../../ecs/entity.md) slider, [**int**](https://en.cppreference.com/cpp/keyword/int) numTeethRack, [**int**](https://en.cppreference.com/cpp/keyword/int) numTeethGear, [**int**](https://en.cppreference.com/cpp/keyword/int) rackLength | Loads a 3D joint. Returns success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadPulleyJoint3D**](physics-system-load-pulley-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint, [**Entity**](../../../ecs/entity.md) bodyA, [**Entity**](../../../ecs/entity.md) bodyB, [**Vector3**](../../../maths/vector3/vector3.md) anchorA, [**Vector3**](../../../maths/vector3/vector3.md) anchorB, [**Vector3**](../../../maths/vector3/vector3.md) fixedPointA, [**Vector3**](../../../maths/vector3/vector3.md) fixedPointB | Loads a 3D joint. Returns success. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroyJoint3D**](physics-system-destroy-joint-3d.md) | [**Joint3DComponent**](../../../../incomplete-docs.md)& joint | Destroys a live 3D joint. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addBroadPhaseLayer3D**](physics-system-add-broad-phase-layer-3d.md) | [**uint8_t**](https://en.cppreference.com/w/cpp/types/integer) index, [**uint32_t**](https://en.cppreference.com/w/cpp/types/integer) groupsToInclude [, [**uint32_t**](https://en.cppreference.com/w/cpp/types/integer) groupsToExclude] | Registers a 3D broad-phase layer. |

## Events

| Event | Signature | Description |
| :--- | :--- | :--- |
| `beginContact2D` | `void([**Body2D**](../../../../incomplete-docs.md), unsigned long, [**Body2D**](../../../../incomplete-docs.md), unsigned long)` | Fired when two 2D bodies begin touching. |
| `endContact2D` | `void([**Body2D**](../../../../incomplete-docs.md), unsigned long, [**Body2D**](../../../../incomplete-docs.md), unsigned long)` | Fired when two 2D bodies stop touching. |
| `beginSensorContact2D` | `void([**Body2D**](../../../../incomplete-docs.md), unsigned long, [**Body2D**](../../../../incomplete-docs.md), unsigned long)` | Fired when a 2D sensor begins overlapping a body. |
| `endSensorContact2D` | `void([**Body2D**](../../../../incomplete-docs.md), unsigned long, [**Body2D**](../../../../incomplete-docs.md), unsigned long)` | Fired when a 2D sensor stops overlapping a body. |
| `hitContact2D` | `void([**Body2D**](../../../../incomplete-docs.md), unsigned long, [**Body2D**](../../../../incomplete-docs.md), unsigned long, [**Vector2**](../../../maths/vector2/vector2.md), [**Vector2**](../../../maths/vector2/vector2.md), float)` | Fired on a 2D hit event with contact points and impulse. |
| `preSolve2D` | `bool([**Body2D**](../../../../incomplete-docs.md), unsigned long, [**Body2D**](../../../../incomplete-docs.md), unsigned long, [**Manifold2D**](../../../../incomplete-docs.md))` | Return `false` to skip a 2D contact this step. |
| `shouldCollide2D` | `bool([**Body2D**](../../../../incomplete-docs.md), unsigned long, [**Body2D**](../../../../incomplete-docs.md), unsigned long)` | Filter callback. Must return a value or the contact is rejected. |
| `onBodyActivated3D` | `void([**Body3D**](../3D/body-3d/body-3d.md))` | Fired when a 3D body wakes up. Runs while the world is stepping. |
| `onBodyDeactivated3D` | `void([**Body3D**](../3D/body-3d/body-3d.md))` | Fired when a 3D body falls asleep. Runs while the world is stepping. |
| `onContactAdded3D` | `void([**Body3D**](../3D/body-3d/body-3d.md), [**Body3D**](../3D/body-3d/body-3d.md), [**Contact3D**](../../../../incomplete-docs.md))` | Fired when two 3D bodies start contacting. Runs while the world is stepping. |
| `onContactPersisted3D` | `void([**Body3D**](../3D/body-3d/body-3d.md), [**Body3D**](../3D/body-3d/body-3d.md), [**Contact3D**](../../../../incomplete-docs.md))` | Fired while two 3D bodies stay in contact. Runs while the world is stepping. |
| `onContactRemoved3D` | `void([**Body3D**](../3D/body-3d/body-3d.md), [**Body3D**](../3D/body-3d/body-3d.md), unsigned long, unsigned long)` | Fired when two 3D bodies separate. Runs while the world is stepping. |
| `shouldCollide3D` | `bool([**Body3D**](../3D/body-3d/body-3d.md), [**Body3D**](../3D/body-3d/body-3d.md), [**Vector3**](../../../maths/vector3/vector3.md), [**CollideShapeResult3D**](../../../../incomplete-docs.md))` | 3D filter callback. Must return a value or the contact is rejected. |
