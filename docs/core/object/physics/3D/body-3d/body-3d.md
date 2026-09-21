[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Body3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Body3D

`Body3D` is the 3D rigid-body handle built on Jolt Physics. Obtain one from `Object::getBody3D()`, add one or more shapes, set the body type and material properties, then call `load()` to register it with the physics world. The body transform syncs with the parent [**Object**](../../../object.md) each physics step.

**Inherits:** EntityHandle (`doriax::EntityHandle`)

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**BodyType**](../../body-type.md) | [**type**](body-3d-type.md) | Simulation mode (`STATIC`, `KINEMATIC`, `DYNAMIC`). |
| [**Body3DMotionQuality**](../../../../../incomplete-docs.md) | [**motionQuality**](body-3d-motion-quality.md) | Collision detection mode (`DISCRETE`, `LINEAR_CAST`). |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**position**](body-3d-position.md) | World-space position of the body. |
| [**Quaternion**](../../../../maths/quaternion/quaternion.md) | [**rotation**](body-3d-rotation.md) | World-space orientation of the body. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**mass**](body-3d-mass.md) | Manual mass override in kilograms. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**gravityFactor**](body-3d-gravity-factor.md) | Gravity scale factor for this body. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**friction**](body-3d-friction.md) | Surface sliding resistance. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**restitution**](body-3d-restitution.md) | Surface bounciness. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**linearVelocity**](body-3d-linear-velocity.md) | Linear velocity in world units per second. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**angularVelocity**](body-3d-angular-velocity.md) | Angular velocity in radians per second. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**allowSleeping**](body-3d-allow-sleeping.md) | Whether the body may fall asleep when idle. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**sensor**](body-3d-sensor.md) | Trigger mode: contacts without impulse. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**collideKinematicVsNonDynamic**](body-3d-collide-kinematic-vs-non-dynamic.md) | Kinematic collision reports against non-dynamic bodies. |
| [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) | [**categoryBitsFilter**](body-3d-category-bits-filter.md) | Collision layer bits. |
| [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) | [**maskBitsFilter**](body-3d-mask-bits-filter.md) | Collision mask bits. |
| [**uint32_t**](https://en.cppreference.com/w/cpp/types/integer) | [**collisionGroupID**](body-3d-collision-group-id.md) | Collision group for self-collision filtering. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| `Scene* scene, Entity entity` | Constructs a Body3D handle for the given entity. |
| `const Body3D& rhs` | Copy constructor. |
|  | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**load**](body-3d-load.md) |  | Registers the body and its shapes with the physics world. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createBoxShape**](body-3d-create-box-shape.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height, [**float**](https://en.cppreference.com/cpp/keyword/float) depth | Creates a solid box collider. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createBoxShape**](body-3d-create-box-shape.md) | [**Vector3**](../../../../maths/vector3/vector3.md) position, [**Quaternion**](../../../../maths/quaternion/quaternion.md) rotation, [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height, [**float**](https://en.cppreference.com/cpp/keyword/float) depth | Creates a box collider with a local offset. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createSphereShape**](body-3d-create-sphere-shape.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Creates a sphere collider. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createSphereShape**](body-3d-create-sphere-shape.md) | [**Vector3**](../../../../maths/vector3/vector3.md) position, [**Quaternion**](../../../../maths/quaternion/quaternion.md) rotation, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Creates a sphere collider with a local offset. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createCapsuleShape**](body-3d-create-capsule-shape.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) halfHeight, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Creates a vertical capsule collider. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createCapsuleShape**](body-3d-create-capsule-shape.md) | [**Vector3**](../../../../maths/vector3/vector3.md) position, [**Quaternion**](../../../../maths/quaternion/quaternion.md) rotation, [**float**](https://en.cppreference.com/cpp/keyword/float) halfHeight, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Creates a capsule collider with a local offset. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createTaperedCapsuleShape**](body-3d-create-tapered-capsule-shape.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) halfHeight, [**float**](https://en.cppreference.com/cpp/keyword/float) topRadius, [**float**](https://en.cppreference.com/cpp/keyword/float) bottomRadius | Creates a tapered capsule collider. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createTaperedCapsuleShape**](body-3d-create-tapered-capsule-shape.md) | [**Vector3**](../../../../maths/vector3/vector3.md) position, [**Quaternion**](../../../../maths/quaternion/quaternion.md) rotation, [**float**](https://en.cppreference.com/cpp/keyword/float) halfHeight, [**float**](https://en.cppreference.com/cpp/keyword/float) topRadius, [**float**](https://en.cppreference.com/cpp/keyword/float) bottomRadius | Creates a tapered capsule with a local offset. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createCylinderShape**](body-3d-create-cylinder-shape.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) halfHeight, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Creates an upright cylinder collider. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createCylinderShape**](body-3d-create-cylinder-shape.md) | [**Vector3**](../../../../maths/vector3/vector3.md) position, [**Quaternion**](../../../../maths/quaternion/quaternion.md) rotation, [**float**](https://en.cppreference.com/cpp/keyword/float) halfHeight, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Creates a cylinder collider with a local offset. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createConvexHullShape**](body-3d-create-convex-hull-shape.md) |  | Creates a convex hull from the entity mesh. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createConvexHullShape**](body-3d-create-convex-hull-shape.md) | [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Vector3**](../../../../maths/vector3/vector3.md)> vertices | Creates a convex hull from explicit vertices. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createConvexHullShape**](body-3d-create-convex-hull-shape.md) | [**Vector3**](../../../../maths/vector3/vector3.md) position, [**Quaternion**](../../../../maths/quaternion/quaternion.md) rotation, [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Vector3**](../../../../maths/vector3/vector3.md)> vertices | Creates a convex hull with a local offset. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createMeshShape**](body-3d-create-mesh-shape.md) |  | Creates a static triangle-mesh collider from the entity mesh. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createMeshShape**](body-3d-create-mesh-shape.md) | [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Vector3**](../../../../maths/vector3/vector3.md)> vertices, [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**uint16_t**](https://en.cppreference.com/w/cpp/types/integer)> indices | Creates a static mesh collider from explicit data. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createMeshShape**](body-3d-create-mesh-shape.md) | [**Vector3**](../../../../maths/vector3/vector3.md) position, [**Quaternion**](../../../../maths/quaternion/quaternion.md) rotation, [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Vector3**](../../../../maths/vector3/vector3.md)> vertices, [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**uint16_t**](https://en.cppreference.com/w/cpp/types/integer)> indices | Creates a static mesh collider with a local offset. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createHeightFieldShape**](body-3d-create-height-field-shape.md) |  | Creates a height-field collider from the entity terrain. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createHeightFieldShape**](body-3d-create-height-field-shape.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) samplesSize | Creates a height-field collider with a resolution grid. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getNumShapes**](body-3d-get-num-shapes.md) |  | Gets the number of shapes on this body. |
| [**Shape3DType**](../../../../../incomplete-docs.md) | [**getShapeType**](body-3d-get-shape-type.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Gets the type of the shape at the given index. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeDensity**](body-3d-shape-density.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) density | Sets the density for all shapes. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeDensity**](body-3d-shape-density.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**float**](https://en.cppreference.com/cpp/keyword/float) density | Sets the density for a specific shape. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getShapeDensity**](body-3d-shape-density.md) |  | Gets the density of the first shape. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getShapeDensity**](body-3d-shape-density.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Gets the density of a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**activate**](body-3d-activate-deactivate.md) |  | Wakes the body if it is sleeping. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**deactivate**](body-3d-activate-deactivate.md) |  | Forces the body to sleep immediately. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**canBeKinematicOrDynamic**](body-3d-can-be-kinematic-or-dynamic.md) |  | Checks whether the body can be kinematic or dynamic. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAllowedDOFsAll**](body-3d-allowed-dofs.md) |  | Allows all 6 degrees of freedom (default). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAllowedDOFs2DPlane**](body-3d-allowed-dofs.md) |  | Restricts motion to the X/Z plane with Y rotation. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAllowedDOFs**](body-3d-allowed-dofs.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) translationX, [**bool**](https://en.cppreference.com/cpp/keyword/bool) translationY, [**bool**](https://en.cppreference.com/cpp/keyword/bool) translationZ, [**bool**](https://en.cppreference.com/cpp/keyword/bool) rotationX, [**bool**](https://en.cppreference.com/cpp/keyword/bool) rotationY, [**bool**](https://en.cppreference.com/cpp/keyword/bool) rotationZ | Fine-grained control over each axis. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setOverrideMassAndInertia**](body-3d-override-mass-and-inertia.md) | [**Vector3**](../../../../maths/vector3/vector3.md) solidBoxSize, [**float**](https://en.cppreference.com/cpp/keyword/float) solidBoxDensity | Computes mass and inertia for a solid box. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBitsFilter**](body-3d-bits-filter.md) | [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) category, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) mask | Sets collision category and mask bits together. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setLinearVelocityClamped**](body-3d-velocity-clamped.md) | [**Vector3**](../../../../maths/vector3/vector3.md) linearVelocity | Sets linear velocity clamped to body speed limits. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAngularVelocityClamped**](body-3d-velocity-clamped.md) | [**Vector3**](../../../../maths/vector3/vector3.md) angularVelocity | Sets angular velocity clamped to body speed limits. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getPointVelocity**](body-3d-point-velocity.md) | [**Vector3**](../../../../maths/vector3/vector3.md) point | Velocity of a world-space point on the body. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getPointVelocityCOM**](body-3d-point-velocity.md) | [**Vector3**](../../../../maths/vector3/vector3.md) pointRelativeToCOM | Velocity of a point relative to the center of mass. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getAccumulatedForce**](body-3d-accumulated-force.md) |  | Gets the total force accumulated this step. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getAccumulatedTorque**](body-3d-accumulated-torque.md) |  | Gets the total torque accumulated this step. |
| [**Matrix4**](../../../../maths/matrix4/matrix4.md) | [**getInverseInertia**](body-3d-inverse-inertia.md) |  | Gets the inverse inertia tensor of the body. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyForce**](body-3d-apply-force.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& force | Applies a force at the center of mass. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyForce**](body-3d-apply-force.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& force, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& point | Applies a force at a world-space point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyTorque**](body-3d-apply-torque.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& torque | Applies a torque to rotate the body. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyImpulse**](body-3d-apply-impulse.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& impulse | Applies an instantaneous impulse at the center of mass. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyImpulse**](body-3d-apply-impulse.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& impulse, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& point | Applies an instantaneous impulse at a world-space point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyAngularImpulse**](body-3d-apply-angular-impulse.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& angularImpulse | Applies an instantaneous angular impulse. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**applyBuoyancyImpulse**](body-3d-apply-buoyancy-impulse.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& surfacePosition, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& surfaceNormal, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) buoyancy, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) linearDrag, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angularDrag, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& fluidVelocity, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& gravity, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) deltaTime | Simulates buoyancy for a submerged body. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getCenterOfMassPosition**](body-3d-center-of-mass-position.md) |  | Gets the world-space center of mass. |
| [**Object**](../../../object.md) | [**getAttachedObject**](body-3d-attached-object.md) |  | Gets the object that owns this body. |
