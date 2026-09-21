[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
CollideShapeResult3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## CollideShapeResult3D

`CollideShapeResult3D` is one pre-contact shape-vs-shape hit delivered to `PhysicsSystem::shouldCollide3D` as `(Body3D, Body3D, Vector3, CollideShapeResult3D)`. Return `true` to accept the collision; read the contact points, penetration axis and shape indices below to predict landings and filter which shapes may touch the character.

## Constructors

| Arguments | Description |
| :--- | :--- |
| `Scene* scene, const JPH::Body* body1, const JPH::Body* body2, const JPH::CollideShapeResult* collideShapeResult` | Builds a result from raw Jolt bodies and hit data (called by the engine). |
| `const CollideShapeResult3D& rhs` | Copy constructor. |
|  | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**JPH**](../../../../../incomplete-docs.md)::[**CollideShapeResult\***](../../../../../incomplete-docs.md) | [**getJoltCollideShapeResult**](collide-shape-result-3d-get-jolt-collide-shape-result.md) |  | Raw Jolt result (C++ only). |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getContactPointOnA**](collide-shape-result-3d-get-contact-point-on-a.md) |  | World contact point on the first shape. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getContactPointOnB**](collide-shape-result-3d-get-contact-point-on-b.md) |  | World contact point on the second shape. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getPenetrationAxis**](collide-shape-result-3d-get-penetration-axis.md) |  | Axis and depth of penetration. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getShapeIndex1**](collide-shape-result-3d-get-shape-index-1.md) |  | Shape index on the first body. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getShapeIndex2**](collide-shape-result-3d-get-shape-index-2.md) |  | Shape index on the second body. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
