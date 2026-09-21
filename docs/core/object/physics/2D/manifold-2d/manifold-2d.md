[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Manifold2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Manifold2D

`Manifold2D` is the decoded Box2D contact manifold behind `Contact2D::getManifold()`. It carries per-point anchors, impulses, separation and persistence flags plus the shared normal and point count that a 2D CharacterController needs for grounded checks, wall detection and landing-impact feedback.

## Constructors

| Arguments | Description |
| :--- | :--- |
| `Scene* scene, const b2Manifold* manifold` | Wraps a raw Box2D manifold pointer (called by the engine). |
| `const Manifold2D& rhs` | Copy constructor. |
|  | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**const**](https://en.cppreference.com/cpp/keyword/const) b2Manifold* | [**getBox2DManifold**](manifold-2d-get-box2d-manifold.md) |  | Raw Box2D manifold (C++ only). |
| [**Vector2**](../../../../maths/vector2/vector2.md) | [**getManifoldPointAnchorA**](manifold-2d-get-manifold-point-anchor-a.md) | [**int32_t**](https://en.cppreference.com/w/cpp/types/integer) index | Anchor of the point on shape A. |
| [**Vector2**](../../../../maths/vector2/vector2.md) | [**getManifoldPointAnchorB**](manifold-2d-get-manifold-point-anchor-b.md) | [**int32_t**](https://en.cppreference.com/w/cpp/types/integer) index | Anchor of the point on shape B. |
| [**Vector2**](../../../../maths/vector2/vector2.md) | [**getManifoldPointPosition**](manifold-2d-get-manifold-point-position.md) | [**int32_t**](https://en.cppreference.com/w/cpp/types/integer) index | Contact position of the point in meters. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getManifoldPointNormalImpulse**](manifold-2d-get-manifold-point-normal-impulse.md) | [**int32_t**](https://en.cppreference.com/w/cpp/types/integer) index | Normal impulse at the point; spikes on hard landings. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getManifoldPointNormalVelocity**](manifold-2d-get-manifold-point-normal-velocity.md) | [**int32_t**](https://en.cppreference.com/w/cpp/types/integer) index | Approach speed along the normal. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getManifoldPointTangentImpulse**](manifold-2d-get-manifold-point-tangent-impulse.md) | [**int32_t**](https://en.cppreference.com/w/cpp/types/integer) index | Friction impulse; high while scraping walls. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getManifoldPointSeparation**](manifold-2d-get-manifold-point-separation.md) | [**int32_t**](https://en.cppreference.com/w/cpp/types/integer) index | Gap (positive) or overlap (negative) at the point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isManifoldPointPersisted**](manifold-2d-is-manifold-point-persisted.md) | [**int32_t**](https://en.cppreference.com/w/cpp/types/integer) index | Whether the point survived from the previous step. |
| [**Vector2**](../../../../maths/vector2/vector2.md) | [**getNormal**](manifold-2d-get-normal.md) |  | Manifold normal; Y near 1 means floor. |
| [**int32_t**](https://en.cppreference.com/w/cpp/types/integer) | [**getPointCount**](manifold-2d-get-point-count.md) |  | Number of active contact points. |
