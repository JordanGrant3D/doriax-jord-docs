---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Body2D

`Body2D` is the 2D rigid-body handle built on Box2D. Obtain one from `Object::getBody2D()`, add one or more shapes, set the body type and material properties, then call `load()` to register it with the physics world. The body transform syncs with the parent [**Object**](../../../object.md) each physics step.

**Inherits:** EntityHandle (`doriax::EntityHandle`)

## Constructors

| Arguments | Description |
| :--- | :--- |
| `Scene* scene, Entity entity` | Constructs a Body2D handle for the given entity. |
| `const Body2D& rhs` | Copy constructor. |
|  | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**b2BodyId**](https://box2d.org/documentation/) | [**getBox2DBody**](body-2d-box2d.md) |  | Gets the underlying Box2D body ID. |
| [**b2ShapeId**](https://box2d.org/documentation/) | [**getBox2DShape**](body-2d-box2d.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Gets the Box2D shape ID at the specified index. |
| [**b2ChainId**](https://box2d.org/documentation/) | [**getBox2DChain**](body-2d-box2d.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Gets the Box2D chain ID at the specified index. |
| [**Object**](../../../object.md) | [**getAttachedObject**](body-2d-attached-object.md) |  | Gets the object attached to this body. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getPointsToMeterScale**](body-2d-points-to-meter-scale.md) |  | Gets the scale factor between points and meters. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**load**](body-2d-load.md) |  | Loads or reloads the physics body. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createBoxShape**](body-2d-create-box-shape.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height | Creates a box shape. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createCenteredBoxShape**](body-2d-create-box-shape.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height | Creates a centered box shape. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createCenteredBoxShape**](body-2d-create-box-shape.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height, [**Vector2**](../../../../maths/vector2/vector2.md) center, [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Creates a centered box shape with custom center and rotation angle. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createRoundedBoxShape**](body-2d-create-box-shape.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Creates a rounded box shape with a corner radius. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createPolygonShape**](body-2d-create-polygon-shape.md) | [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Vector2**](../../../../maths/vector2/vector2.md)> vertices | Creates a custom polygon shape from vertices. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createCircleShape**](body-2d-create-circle-shape.md) | [**Vector2**](../../../../maths/vector2/vector2.md) center, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Creates a circle shape. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createCapsuleShape**](body-2d-create-capsule-shape.md) | [**Vector2**](../../../../maths/vector2/vector2.md) center1, [**Vector2**](../../../../maths/vector2/vector2.md) center2, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Creates a capsule shape. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createSegmentShape**](body-2d-create-segment-shape.md) | [**Vector2**](../../../../maths/vector2/vector2.md) point1, [**Vector2**](../../../../maths/vector2/vector2.md) point2 | Creates a line segment shape. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**createChainShape**](body-2d-create-chain-shape.md) | [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Vector2**](../../../../maths/vector2/vector2.md)> vertices, [**bool**](https://en.cppreference.com/cpp/keyword/bool) loop | Creates a chain shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeAllShapes**](body-2d-shapes.md) |  | Removes all shapes from the body. |
| [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Contact2D**](../contact-2d/contact-2d.md)> | [**getBodyContacts**](body-2d-contacts.md) |  | Gets all active contacts for the entire body. |
| [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Contact2D**](../contact-2d/contact-2d.md)> | [**getShapeContacts**](body-2d-contacts.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Gets all active contacts for a specific shape index. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getNumShapes**](body-2d-shapes.md) |  | Gets the total number of shapes. |
| [**Shape2DType**](shape-2d-type.md) | [**getShapeType**](body-2d-shapes.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Gets the type of shape at the specified index. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeDensity**](body-2d-shape-density.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) density | Sets the density of the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeFriction**](body-2d-shape-friction.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) friction | Sets the friction of the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeRestitution**](body-2d-shape-restitution.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) restitution | Sets the restitution of the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeDensity**](body-2d-shape-density.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**float**](https://en.cppreference.com/cpp/keyword/float) density | Sets the density for a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeFriction**](body-2d-shape-friction.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**float**](https://en.cppreference.com/cpp/keyword/float) friction | Sets the friction for a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeRestitution**](body-2d-shape-restitution.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**float**](https://en.cppreference.com/cpp/keyword/float) restitution | Sets the restitution for a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeEnableHitEvents**](body-2d-shape-set-events.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) hitEvents | Enables or disables hit events for the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeContactEvents**](body-2d-shape-set-events.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) contactEvents | Enables or disables contact events for the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapePreSolveEvents**](body-2d-shape-set-events.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) preSolveEvent | Enables or disables pre-solve events for the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeSensorEvents**](body-2d-shape-set-events.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) sensorEvents | Enables or disables sensor events for the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeEnableHitEvents**](body-2d-shape-set-events.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**bool**](https://en.cppreference.com/cpp/keyword/bool) hitEvents | Enables or disables hit events for a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeContactEvents**](body-2d-shape-set-events.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**bool**](https://en.cppreference.com/cpp/keyword/bool) contactEvents | Enables or disables contact events for a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapePreSolveEvents**](body-2d-shape-set-events.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**bool**](https://en.cppreference.com/cpp/keyword/bool) preSolveEvent | Enables or disables pre-solve events for a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShapeSensorEvents**](body-2d-shape-set-events.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index, [**bool**](https://en.cppreference.com/cpp/keyword/bool) sensorEvents | Enables or disables sensor events for a specific shape. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getShapeDensity**](body-2d-shape-density.md) |  | Gets the density of the first shape. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getShapeFriction**](body-2d-shape-friction.md) |  | Gets the friction of the first shape. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getShapeRestitution**](body-2d-shape-restitution.md) |  | Gets the restitution of the first shape. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getShapeDensity**](body-2d-shape-density.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Gets the density of a specific shape. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getShapeFriction**](body-2d-shape-friction.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Gets the friction of a specific shape. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getShapeRestitution**](body-2d-shape-restitution.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Gets the restitution of a specific shape. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isShapeEnableHitEvents**](body-2d-shape-is-events.md) |  | Checks if hit events are enabled for the first shape. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isShapeContactEvents**](body-2d-shape-is-events.md) |  | Checks if contact events are enabled for the first shape. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isShapePreSolveEvents**](body-2d-shape-is-events.md) |  | Checks if pre-solve events are enabled for the first shape. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isShapeSensorEvents**](body-2d-shape-is-events.md) |  | Checks if sensor events are enabled for the first shape. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isShapeEnableHitEvents**](body-2d-shape-is-events.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Checks if hit events are enabled for a specific shape. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isShapeContactEvents**](body-2d-shape-is-events.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Checks if contact events are enabled for a specific shape. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isShapePreSolveEvents**](body-2d-shape-is-events.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Checks if pre-solve events are enabled for a specific shape. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isShapeSensorEvents**](body-2d-shape-is-events.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Checks if sensor events are enabled for a specific shape. |
| [**Vector2**](../../../../maths/vector2/vector2.md) | [**getPosition**](body-2d-position.md) |  | Gets the world position of the body. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPosition**](body-2d-position.md) | [**Vector2**](../../../../maths/vector2/vector2.md) position | Sets the world position of the body. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getAngle**](body-2d-angle.md) |  | Gets the rotation angle of the body. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAngle**](body-2d-angle.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Sets the rotation angle of the body. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setLinearVelocity**](body-2d-linear-velocity.md) | [**Vector2**](../../../../maths/vector2/vector2.md) linearVelocity | Sets the linear velocity vector. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAngularVelocity**](body-2d-angular-velocity.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) angularVelocity | Sets the angular velocity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setLinearDamping**](body-2d-damping.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) linearDamping | Sets the linear damping. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAngularDamping**](body-2d-damping.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) angularDamping | Sets the angular damping. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setEnableSleep**](body-2d-sleep.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) enableSleep | Enables or disables sleeping for the body. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAwake**](body-2d-sleep.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) awake | Sets whether the body is awake. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFixedRotation**](body-2d-fixed-rotation.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) fixedRotation | Sets whether rotation is fixed. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBullet**](body-2d-bullet.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) bullet | Sets whether the body is treated as a bullet for continuous collision. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setType**](body-2d-type.md) | [**BodyType**](../../body-type.md) type | Sets the body type (Static, Kinematic, Dynamic). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setEnabled**](body-2d-enabled.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) enabled | Enables or disables the body. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGravityScale**](body-2d-gravity-scale.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) gravityScale | Sets the gravity scale for the body. |
| [**Vector2**](../../../../maths/vector2/vector2.md) | [**getLinearVelocity**](body-2d-linear-velocity.md) |  | Gets the linear velocity vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getAngularVelocity**](body-2d-angular-velocity.md) |  | Gets the angular velocity. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getLinearDamping**](body-2d-damping.md) |  | Gets the linear damping. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getAngularDamping**](body-2d-damping.md) |  | Gets the angular damping. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isEnableSleep**](body-2d-sleep.md) |  | Checks if sleep is enabled. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isAwake**](body-2d-sleep.md) |  | Checks if the body is awake. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFixedRotation**](body-2d-fixed-rotation.md) |  | Checks if rotation is fixed. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isBullet**](body-2d-bullet.md) |  | Checks if the body is a bullet. |
| [**BodyType**](../../body-type.md) | [**getType**](body-2d-type.md) |  | Gets the body type. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isEnabled**](body-2d-enabled.md) |  | Checks if the body is enabled. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getGravityScale**](body-2d-gravity-scale.md) |  | Gets the gravity scale. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBitsFilter**](body-2d-bits-filter.md) | [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) categoryBits, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) maskBits | Sets collision category and mask bits for the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBitsFilter**](body-2d-bits-filter.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) shapeIndex, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) categoryBits, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) maskBits | Sets collision category and mask bits for a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCategoryBitsFilter**](body-2d-category-bits-filter.md) | [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) categoryBits | Sets the category bits for the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaskBitsFilter**](body-2d-mask-bits-filter.md) | [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) maskBits | Sets the mask bits for the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGroupIndexFilter**](body-2d-group-index-filter.md) | [**int16_t**](https://en.cppreference.com/w/cpp/types/integer) groupIndex | Sets the group index for the first shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCategoryBitsFilter**](body-2d-category-bits-filter.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) shapeIndex, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) categoryBits | Sets the category bits for a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaskBitsFilter**](body-2d-mask-bits-filter.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) shapeIndex, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) maskBits | Sets the mask bits for a specific shape. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGroupIndexFilter**](body-2d-group-index-filter.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) shapeIndex, [**int16_t**](https://en.cppreference.com/w/cpp/types/integer) groupIndex | Sets the group index for a specific shape. |
| [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) | [**getCategoryBitsFilter**](body-2d-category-bits-filter.md) |  | Gets the category bits of the first shape. |
| [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) | [**getMaskBitsFilter**](body-2d-mask-bits-filter.md) |  | Gets the mask bits of the first shape. |
| [**int16_t**](https://en.cppreference.com/w/cpp/types/integer) | [**getGroupIndexFilter**](body-2d-group-index-filter.md) |  | Gets the group index of the first shape. |
| [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) | [**getCategoryBitsFilter**](body-2d-category-bits-filter.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) shapeIndex | Gets the category bits of a specific shape. |
| [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) | [**getMaskBitsFilter**](body-2d-mask-bits-filter.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) shapeIndex | Gets the mask bits of a specific shape. |
| [**int16_t**](https://en.cppreference.com/w/cpp/types/integer) | [**getGroupIndexFilter**](body-2d-group-index-filter.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) shapeIndex | Gets the group index of a specific shape. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getMass**](body-2d-mass.md) |  | Gets the total mass of the body. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getRotationalInertia**](body-2d-mass.md) |  | Gets the rotational inertia of the body. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyMassFromShapes**](body-2d-mass.md) |  | Computes and applies mass properties automatically from attached shapes. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyForce**](body-2d-apply-force.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](../../../../maths/vector2/vector2.md)& force, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](../../../../maths/vector2/vector2.md)& point, [**bool**](https://en.cppreference.com/cpp/keyword/bool) wake | Applies a force at a specific world point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyForceToCenter**](body-2d-apply-force.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](../../../../maths/vector2/vector2.md)& force, [**bool**](https://en.cppreference.com/cpp/keyword/bool) wake | Applies a force directly to the center of mass. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyTorque**](body-2d-apply-torque.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) torque, [**bool**](https://en.cppreference.com/cpp/keyword/bool) wake | Applies a rotational torque. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyLinearImpulse**](body-2d-apply-linear-impulse.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](../../../../maths/vector2/vector2.md)& impulse, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](../../../../maths/vector2/vector2.md)& point, [**bool**](https://en.cppreference.com/cpp/keyword/bool) wake | Applies a linear impulse at a specific world point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyLinearImpulseToCenter**](body-2d-apply-linear-impulse.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](../../../../maths/vector2/vector2.md)& impulse, [**bool**](https://en.cppreference.com/cpp/keyword/bool) wake | Applies a linear impulse directly to the center of mass. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**applyAngularImpulse**](body-2d-apply-angular-impulse.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) impulse, [**bool**](https://en.cppreference.com/cpp/keyword/bool) wake | Applies an angular impulse. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
