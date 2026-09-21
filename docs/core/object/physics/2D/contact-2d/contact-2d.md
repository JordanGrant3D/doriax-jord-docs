[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Contact2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Contact2D

`Contact2D` is one active 2D contact snapshot from Box2D. Poll it each frame with `Body2D::getBodyContacts()` (whole character) or `Body2D::getShapeContacts()` (a single shape such as the foot sensor), then use the manifold and shape indices below for landing detection and hit filtering.

## Constructors

| Arguments | Description |
| :--- | :--- |
| `Scene* scene, b2ContactData contact` | Builds a snapshot from raw Box2D contact data (called by the engine). |
| `const Contact2D& rhs` | Copy constructor. |
|  | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**b2ContactData**](https://box2d.org/documentation/) | [**getBox2DContact**](contact-2d-get-box2d-contact.md) |  | Raw Box2D contact data (shape IDs plus manifold). |
| [**Manifold2D**](../manifold-2d/manifold-2d.md) | [**getManifold**](contact-2d-get-manifold.md) |  | Contact manifold with points, impulses and normal. |
| [**Entity**](../../../../ecs/entity.md) | [**getBodyEntityA**](contact-2d-get-body-entity-a.md) |  | Entity of the first (A) body. |
| [**Body2D**](../body-2d/body-2d.md) | [**getBodyA**](contact-2d-get-body-a.md) |  | Body handle of the first (A) body. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getShapeIndexA**](contact-2d-get-shape-index-a.md) |  | Shape index of the contact on body A. |
| [**Entity**](../../../../ecs/entity.md) | [**getBodyEntityB**](contact-2d-get-body-entity-b.md) |  | Entity of the second (B) body. |
| [**Body2D**](../body-2d/body-2d.md) | [**getBodyB**](contact-2d-get-body-b.md) |  | Body handle of the second (B) body. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getShapeIndexB**](contact-2d-get-shape-index-b.md) |  | Shape index of the contact on body B. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
