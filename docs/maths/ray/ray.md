[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Ray
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Static Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**RayReturn**](ray-return.md) | [**NO_HIT**](../../incomplete-docs.md) | Constant representing a default non-intersection hit result (`{false, -1, Vector3::ZERO, Vector3::ZERO, NULL_ENTITY, 0}`). |

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector3**](../vector3/vector3.md) | [**origin**](../../incomplete-docs.md) | Origin point of the ray. |
| [**Vector3**](../vector3/vector3.md) | [**direction**](../../incomplete-docs.md) | Direction vector of the ray. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| | Default constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Ray**](ray.md)& ray | Copy constructor. |
| [**Vector3**](../vector3/vector3.md) origin, [**Vector3**](../vector3/vector3.md) direction | Constructs a ray with the specified origin and direction vectors. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Ray**](ray.md)& | [**operator =**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Ray**](ray.md)& r | Copy assignment operator. |
| [**Vector3**](../vector3/vector3.md) | [**operator \***](../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) t | Returns the point along the ray at distance `t` (shorthand for `getPoint(t)`). |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setOrigin**](../../incomplete-docs.md) | [**Vector3**](../vector3/vector3.md) origin | Sets the origin point of the ray. |
| [**Vector3**](../vector3/vector3.md) | [**getOrigin**](../../incomplete-docs.md) | | Returns the origin point of the ray. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDirection**](../../incomplete-docs.md) | [**Vector3**](../vector3/vector3.md) direction | Sets the direction vector of the ray. |
| [**Vector3**](../vector3/vector3.md) | [**getDirection**](../../incomplete-docs.md) | | Returns the direction vector of the ray. |
| [**Vector3**](../vector3/vector3.md) | [**getPoint**](../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) distance | Calculates and returns a point along the ray at the given distance. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](../../incomplete-docs.md)& plane | Tests intersection with a 3D Plane. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](../../incomplete-docs.md)& box | Tests intersection with an Axis-Aligned Bounding Box (AABB). |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](../../incomplete-docs.md)& obb | Tests intersection with an Oriented Bounding Box (OBB). |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](../sphere/sphere.md)& sphere | Tests intersection with a Sphere. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Body2D**](../../incomplete-docs.md)& body | Casts ray against a 2D physics body. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Body2D**](../../incomplete-docs.md)& body, [**size_t**](https://en.cppreference.com/cpp/types/size_t) shape | Casts ray against a specific shape index on a 2D physics body. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Body3D**](../../incomplete-docs.md)& body | Casts ray against a 3D physics body. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Body3D**](../../incomplete-docs.md)& body, [**size_t**](https://en.cppreference.com/cpp/types/size_t) shape | Casts ray against a specific shape index on a 3D physics body. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**Scene**](../../incomplete-docs.md)\* scene, [**RayFilter**](../../incomplete-docs.md) raytest, [**bool**](https://en.cppreference.com/cpp/keyword/bool) onlyStatic = false, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) categoryBits = ~0u, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) maskBits = ~0u, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Entity**](../../incomplete-docs.md)>\* ignoreEntities = nullptr | Performs ray casting test against a 2D or 3D physics scene with custom filters and flags. |
| [**RayReturn**](ray-return.md) | [**intersects**](../../incomplete-docs.md) | [**Scene**](../../incomplete-docs.md)\* scene, [**uint8_t**](https://en.cppreference.com/w/cpp/types/integer) broadPhaseLayer3D, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) categoryBits = ~0u, [**uint16_t**](https://en.cppreference.com/w/cpp/types/integer) maskBits = ~0u, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::vector**](https://en.cppreference.com/w/cpp/container/vector)<[**Entity**](../../incomplete-docs.md)>\* ignoreEntities = nullptr | Performs ray casting test against a 3D scene specifying a broadphase layer and collision filters. |