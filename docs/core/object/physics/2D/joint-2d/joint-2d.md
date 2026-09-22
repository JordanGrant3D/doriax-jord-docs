---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Joint2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Joint2D

`Joint2D` is the 2D joint handle built on Box2D. Construct one with a `Scene`, then call a `set*` method with two body entities to create the constraint: distance tethers and ropes for swinging platforms, revolute pivots for doors and seesaws, prismatic sliders for elevators, wheels for buggies the CharacterController can ride, and weld or motor joints for bolted-on gear and patrol platforms. Query the native handle with `getBox2DJoint()` or the active configuration with `getType()`.

**Inherits:** EntityHandle (`doriax::EntityHandle`)

## Constructors

| Arguments | Description |
| :--- | :--- |
| `Scene* scene` | Creates a Joint2D handle and attaches a fresh joint component. |
| `Scene* scene, Entity entity` | Wraps an existing scene entity as a Joint2D handle. |
| `const Joint2D& rhs` | Copy constructor. |
|  | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**b2JointId**](https://box2d.org/documentation/) | [**getBox2DJoint**](joint-2d-get-box2d-joint.md) |  | Gets the underlying Box2D joint ID. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDistanceJoint**](joint-2d-set-distance-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB | Links two bodies with a fixed separation, optionally as a rope. |
|  |  | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector2**](../../../../maths/vector2/vector2.md) worldAnchorOnBodyA, [**Vector2**](../../../../maths/vector2/vector2.md) worldAnchorOnBodyB, [**bool**](https://en.cppreference.com/cpp/keyword/bool) rope |  |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRevoluteJoint**](joint-2d-set-revolute-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector2**](../../../../maths/vector2/vector2.md) worldAnchor | Pins two bodies together at a pivot so one can rotate. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPrismaticJoint**](joint-2d-set-prismatic-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector2**](../../../../maths/vector2/vector2.md) worldAnchor, [**Vector2**](../../../../maths/vector2/vector2.md) worldAxis | Slides one body along an axis fixed to the other. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMouseJoint**](joint-2d-set-mouse-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector2**](../../../../maths/vector2/vector2.md) target | Drags a body toward a world-space target point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setWheelJoint**](joint-2d-set-wheel-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector2**](../../../../maths/vector2/vector2.md) worldAnchor, [**Vector2**](../../../../maths/vector2/vector2.md) worldAxis | Adds a sprung wheel axle for vehicle suspension. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setWeldJoint**](joint-2d-set-weld-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB, [**Vector2**](../../../../maths/vector2/vector2.md) worldAnchor | Rigidly fuses two bodies at an anchor point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMotorJoint**](joint-2d-set-motor-joint.md) | [**Entity**](../../../../ecs/entity.md) bodyA, [**Entity**](../../../../ecs/entity.md) bodyB | Drives one body toward the other with a motor. |
| [**Joint2DType**](../../../../../object/physics/2D/joint-2d/joint-2d-type.md) | [**getType**](joint-2d-get-type.md) |  | Gets the active joint type. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
