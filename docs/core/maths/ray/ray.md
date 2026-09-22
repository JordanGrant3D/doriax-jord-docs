---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Ray
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Static Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**RayReturn**](ray-return.md) | [**NO_HIT**](../../../maths/ray/ray-return.md) | Constant representing a default non-intersection hit result (`{false, -1, Vector3::ZERO, Vector3::ZERO, [NULL_ENTITY](../../ecs/entity-null-entity.md), 0}`). |

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector3**](../vector3/vector3.md) | [**origin**](../../../maths/ray/ray.md) | Origin point of the ray. |
| [**Vector3**](../vector3/vector3.md) | [**direction**](../../../maths/ray/ray.md) | Direction vector of the ray. |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Ray**](ray.md)& ray | Copy constructor. |
| [**Vector3**](../vector3/vector3.md) origin, [**Vector3**](../vector3/vector3.md) direction | Constructs a ray with the specified origin and direction vectors. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Ray**](ray.md)& | [**operator =**](../../../maths/ray/ray.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Ray**](ray.md)& r | Copy assignment operator. |
| [**Vector3**](../vector3/vector3.md) | [**operator \***](../../../maths/ray/ray.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) t | Returns the point along the ray at distance `t` (shorthand for `getPoint(t)`). |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setOrigin**](../../../maths/ray/ray.md) | [**Vector3**](../vector3/vector3.md) origin | Sets the origin point of the ray. |
| [**Vector3**](../vector3/vector3.md) | [**getOrigin**](../../../maths/ray/ray.md) |  | Returns the origin point of the ray. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDirection**](../../../maths/ray/ray.md) | [**Vector3**](../vector3/vector3.md) direction | Sets the direction vector of the ray. |
| [**Vector3**](../vector3/vector3.md) | [**getDirection**](../../../maths/ray/ray.md) |  | Returns the direction vector of the ray. |
| [**Vector3**](../vector3/vector3.md) | [**getPoint**](../../../maths/ray/ray.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) distance | Calculates and returns a point along the ray at the given distance. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](../../../maths/plane/plane.md)& plane | Tests intersection with a 3D Plane. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](../../../object/physics/2D/aabb/aabb.md)& box | Tests intersection with an Axis-Aligned Bounding Box (AABB). |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](../../../object/physics/3D/obb/obb.md)& obb | Tests intersection with an Oriented Bounding Box (OBB). |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](../sphere/sphere.md)& sphere | Tests intersection with a Sphere. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Body2D**](../../../object/physics/2D/body-2d/body-2d.md)& body | Casts ray against a 2D physics body. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Body2D**](../../../object/physics/2D/body-2d/body-2d.md)& body, [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) shape | Casts ray against a specific shape index on a 2D physics body. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Body3D**](../../../object/physics/3D/body-3d/body-3d.md)& body | Casts ray against a 3D physics body. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Body3D**](../../../object/physics/3D/body-3d/body-3d.md)& body, [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) shape | Casts ray against a specific shape index on a 3D physics body. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**Scene**](../../../scene/scene.md)\* scene, [**RayFilter**](../../../maths/ray/ray-filter/ray-filter.md) raytest, [**bool**](https://en.cppreference.com/cpp/keyword/bool) onlyStatic = false, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) categoryBits = ~0u, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) maskBits = ~0u, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Entity**](../../../core/ecs/entity.md)>\* ignoreEntities = nullptr | Performs ray casting test against a 2D or 3D physics scene with custom filters and flags. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../../maths/ray/ray.md) | [**Scene**](../../../scene/scene.md)\* scene, [**uint8_t**](https://en.cppreference.com/w/cpp/types/integer) broadPhaseLayer3D, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) categoryBits = ~0u, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) maskBits = ~0u, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Entity**](../../../core/ecs/entity.md)>\* ignoreEntities = nullptr | Performs ray casting test against a 3D scene specifying a broadphase layer and collision filters. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
