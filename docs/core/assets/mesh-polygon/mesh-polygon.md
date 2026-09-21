[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
MeshPolygon
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## MeshPolygon

`MeshPolygon` traces flat 2D costume pieces (chest emblems, jersey numbers, badges) from an outline of vertices. A CharacterController-style script wraps its own entity (`MeshPolygon emblem(getScene(), getEntity())`), queues outline points with `addVertex`, builds the cloth with `createPolygon`, then checks the derived `width` / `height` polygon counts against the print budget. It inherits every [Mesh](../mesh/mesh.md) outfit feature (tint, materials, shadows, instancing).

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../../incomplete-docs.md)* scene | Constructs a polygon mesh and adds its components. |
| [**Scene**](../../../incomplete-docs.md)* scene, [**Entity**](../../../core/ecs/entity.md) entity | Wraps an existing scene entity as a polygon mesh without adding components. |

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) | [**width**](mesh-polygon-width.md) | Derived pixel width of the built polygon (read-only). |
| [**unsigned int**](https://en.cppreference.com/cpp/keyword/unsigned) | [**height**](mesh-polygon-height.md) | Derived pixel height of the built polygon (read-only). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**flipY**](mesh-polygon-flip-y.md) | Vertical UV flip; `setFlipY` writes it, `isFlipY` reads it back. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**createPolygon**](mesh-polygon-create-polygon.md) |  | Builds the polygon mesh from queued vertices. Returns `true` on success. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addVertex**](mesh-polygon-add-vertex.md) | [**Vector3**](../../../core/maths/vector3/vector3.md) vertex | Queues one outline vertex from a 3D point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addVertex**](mesh-polygon-add-vertex.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y | Queues one outline vertex from 2D coordinates. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearVertices**](mesh-polygon-clear-vertices.md) |  | Discards the queued outline vertices. |
