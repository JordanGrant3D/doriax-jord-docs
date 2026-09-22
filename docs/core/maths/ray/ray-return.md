---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
RayReturn
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**hit**](ray-return.md) | Indicates whether an intersection occurred. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**distance**](ray-return.md) | Distance from the ray origin to the intersection point. |
| [**Vector3**](../vector3/vector3.md) | [**point**](ray-return.md) | World coordinates of the intersection point. |
| [**Vector3**](../vector3/vector3.md) | [**normal**](ray-return.md) | Surface normal vector at the point of intersection. |
| [**Entity**](../../ecs/entity.md) | [**body**](ray-return.md) | Entity handle of the physics body that was hit. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**shapeIndex**](ray-return.md) | Index of the intersected shape or sub-shape. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator bool**](ray-return.md) |  | Implicit conversion operator returning the value of `hit`. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
