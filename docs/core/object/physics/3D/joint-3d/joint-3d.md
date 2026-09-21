[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Joint3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Joint3D

`Joint3D` is the 3D joint handle built on Jolt Physics. Construct one with a `Scene`, then call a `set*` method with two body entities to create the constraint: fixed mounts for helmets and gear, point / cone / swing-twist joints for ragdoll limbs, hinges for doors the CharacterController can push, sliders and pulleys for elevators, paths for patrol carts, and gear or rack-and-pinion couplings for clockwork gates. Query the native constraint with `getJoltJoint()` or the active configuration with `getType()`.

**Inherits:** EntityHandle (`doriax::EntityHandle`)

## Constructors

| Arguments | Description |
| :--- | :--- |
| `Scene* scene` | Creates a Joint3D handle and attaches a fresh joint component. |
| `Scene* scene, Entity entity` | Wraps an existing scene entity as a Joint3D handle. |
| `const Joint3D& rhs` | Copy constructor. |
|  | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| JPH::TwoBodyConstraint* | [**getJoltJoint**](joint-3d-get-jolt-joint.md) |  | Gets the underlying Jolt constraint. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFixedJoint**](joint-3d-set-fixed-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB | Rigidly fuses two bodies with no relative motion. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDistanceJoint**](joint-3d-set-distance-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB | Links two bodies with a fixed separation. |
|  |  | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchorOnBodyA, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchorOnBodyB |  |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPointJoint**](joint-3d-set-point-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchor | Ball-and-socket joint rotating freely around a point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setHingeJoint**](joint-3d-set-hinge-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchor, [**Vector3**](../../../../maths/vector3/vector3.md) axis, [**Vector3**](../../../../maths/vector3/vector3.md) normal | Single-axis hinge for doors and elbows. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setConeJoint**](joint-3d-set-cone-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchor, [**Vector3**](../../../../maths/vector3/vector3.md) twistAxis | Cone-limited ball joint for necks and wrists. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPrismaticJoint**](joint-3d-set-prismatic-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector3**](../../../../maths/vector3/vector3.md) sliderAxis, [**float**](https://en.cppreference.com/cpp/keyword/float) limitsMin, [**float**](https://en.cppreference.com/cpp/keyword/float) limitsMax | Slider with travel limits along one axis. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSwingTwistJoint**](joint-3d-set-swing-twist-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchor, [**Vector3**](../../../../maths/vector3/vector3.md) twistAxis, [**Vector3**](../../../../maths/vector3/vector3.md) planeAxis, [**float**](https://en.cppreference.com/cpp/keyword/float) normalHalfConeAngle, [**float**](https://en.cppreference.com/cpp/keyword/float) planeHalfConeAngle, [**float**](https://en.cppreference.com/cpp/keyword/float) twistMinAngle, [**float**](https://en.cppreference.com/cpp/keyword/float) twistMaxAngle | Shoulder-style joint with independent swing and twist limits. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSixDOFJoint**](joint-3d-set-six-dof-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchorOnBodyA, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchorOnBodyB, [**Vector3**](../../../../maths/vector3/vector3.md) axisX, [**Vector3**](../../../../maths/vector3/vector3.md) axisY | Fully configurable six-degree-of-freedom joint. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPathJoint**](joint-3d-set-path-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Vector3**](../../../../maths/vector3/vector3.md)> positions, [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Vector3**](../../../../maths/vector3/vector3.md)> tangents, [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Vector3**](../../../../maths/vector3/vector3.md)> normals, [**Vector3**](../../../../maths/vector3/vector3.md) pathPosition, [**bool**](https://en.cppreference.com/cpp/keyword/bool) isLooping | Constrains a body to travel along a spline path. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGearJoint**](joint-3d-set-gear-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Entity**](../../../../ecs/entity.md) hingeA, [**Entity**](../../../../ecs/entity.md) hingeB, [**int**](https://en.cppreference.com/cpp/keyword/int) numTeethGearA, [**int**](https://en.cppreference.com/cpp/keyword/int) numTeethGearB | Couples two hinges with a gear ratio. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRackAndPinionJoint**](joint-3d-set-rack-and-pinion-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Entity**](../../../../ecs/entity.md) hinge, [**Entity**](../../../../ecs/entity.md) slider, [**int**](https://en.cppreference.com/cpp/keyword/int) numTeethRack, [**int**](https://en.cppreference.com/cpp/keyword/int) numTeethGear, [**int**](https://en.cppreference.com/cpp/keyword/int) rackLength | Converts hinge rotation into slider translation. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPulleyJoint**](joint-3d-set-pulley-joint.md) | Joint3DComponent& joint, [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchorOnBodyA, [**Vector3**](../../../../maths/vector3/vector3.md) worldAnchorOnBodyB, [**Vector3**](../../../../maths/vector3/vector3.md) fixedPointA, [**Vector3**](../../../../maths/vector3/vector3.md) fixedPointB | Counterweight pulley between two bodies. |
| [**Joint3DType**](../../../incomplete-docs.md) | [**getType**](joint-3d-get-type.md) |  | Gets the active joint type. |
