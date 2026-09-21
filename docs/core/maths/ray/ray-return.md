[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
RayReturn
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hit**](../../../incomplete-docs.md) | Indicates whether an intersection occurred. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**distance**](../../../incomplete-docs.md) | Distance from the ray origin to the intersection point. |
| [**Vector3**](../vector3/vector3.md) | [**point**](../../../incomplete-docs.md) | World coordinates of the intersection point. |
| [**Vector3**](../vector3/vector3.md) | [**normal**](../../../incomplete-docs.md) | Surface normal vector at the point of intersection. |
| [**Entity**](../../ecs/entity.md) | [**body**](../../../incomplete-docs.md) | Entity handle of the physics body that was hit. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**shapeIndex**](../../../incomplete-docs.md) | Index of the intersected shape or sub-shape. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator bool**](../../../incomplete-docs.md) |  | Implicit conversion operator returning the value of `hit`. |
