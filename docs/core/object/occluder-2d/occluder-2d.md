[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Occluder2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Occluder2D

`Occluder2D` is a 2D shadow caster that blocks light from every shadow-enabled light in the scene. It defines an outline either automatically from the sibling mesh bounds (`AUTO_QUAD`) or from a custom local-space point list (`POLYGON`). The stealth gallery builds invisible `POLYGON` shadow walls that block guard sight lines, and toggles them during blackouts.

**Inherits:** [**Object**](../object.md)

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| `Occluder2DShape` | [**shape**](occluder-2d-shape.md) | Outline source (`AUTO_QUAD` or `POLYGON`). Defaults to `AUTO_QUAD`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**closed**](occluder-2d-closed.md) | Closed loop (`true`) or open chain (`false`). Defaults to `true`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**enabled**](occluder-2d-enabled.md) | Shadow casting on/off. Defaults to `true`. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../../incomplete-docs.md)* scene | Creates an occluder entity and adds its component. |
| [**Scene**](../../../incomplete-docs.md)* scene, [**Entity**](../../ecs/entity.md) entity | Wraps an existing scene entity as an occluder. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addVertex**](occluder-2d-add-vertex.md) | [**Vector2**](../../maths/vector2/vector2.md) vertex \| [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y | Appends a polygon vertex. Switches to `POLYGON`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearVertices**](occluder-2d-clear-vertices.md) |  | Removes all polygon points. |
| [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) | [**getVertexCount**](occluder-2d-vertex-count.md) |  | Returns the polygon point count. |

## Enumerations

### Occluder2DShape

* **AUTO_QUAD** - The outline is derived automatically from the bounds of the mesh on the same entity. Casts nothing when the entity has no mesh.
* **POLYGON** - The outline is the component's custom local-space point list.
