###### version: v0.7.1
---
title: Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Static Properties

| Property | Description |
| :--- | :--- |
| [**ZERO**](../../incomplete-docs.md) | Shorthand for writing `Vector2(0, 0)`. |
| [**UNIT_X**](../../incomplete-docs.md) | Shorthand for writing `Vector2(1, 0)`. |
| [**UNIT_Y**](../../incomplete-docs.md) | Shorthand for writing `Vector2(0, 1)`. |
| [**NEGATIVE_UNIT_X**](../../incomplete-docs.md) | Shorthand for writing `Vector2(-1, 0)`. |
| [**NEGATIVE_UNIT_Y**](../../incomplete-docs.md) | Shorthand for writing `Vector2(0, -1)`. |
| [**UNIT_SCALE**](../../incomplete-docs.md) | Shorthand for writing `Vector2(1, 1)`. |

## Properties

| Property | Description |
| :--- | :--- |
| [**this[uint]**](../../incomplete-docs.md) | Access the x, y components using `[0]`, `[1]` respectively. |
| [**x**](../../incomplete-docs.md) | X component of the vector. |
| [**y**](../../incomplete-docs.md) | Y component of the vector. |

## Methods

| Method | Description |
| :--- | :--- |
| [**isValid**](../../incomplete-docs.md) | Checks that `x`, `y` components are finite numbers. |
| [**length**](../../incomplete-docs.md) | Calculates the magnitude (length) of the vector. |
| [**squaredLength**](../../incomplete-docs.md) | Calculates the squared magnitude of the vector without performing a square root. |
| [**dotProduct**](../../incomplete-docs.md) | Calculates the scalar dot product with another vector. |
| [**absDotProduct**](../../incomplete-docs.md) | Calculates the sum of absolute products of corresponding components. |
| [**distance**](../../incomplete-docs.md) | Calculates the Euclidean distance to another point. |
| [**squaredDistance**](../../incomplete-docs.md) | Calculates the squared distance to another point without square root overhead. |
| [**normalize**](../../incomplete-docs.md) | Normalizes the vector in-place to unit length and returns a reference to itself. |
| [**normalized**](../../incomplete-docs.md) | Returns a normalized unit-length copy of this vector without modifying the original. |
| [**normalizeL**](../../incomplete-docs.md) | Normalizes the vector in-place and returns its original magnitude. |
| [**crossProduct**](../../incomplete-docs.md) | Calculates the cross product vector perpendicular to both vectors. |
| [**midPoint**](../../incomplete-docs.md) | Calculates the midpoint between this vector and another position vector. |
| [**moveTowards**](../../incomplete-docs.md) | Moves the vector toward a target point by a maximum distance step. |
| [**lerp**](../../incomplete-docs.md) | Linearly interpolates between this vector and a target vector by factor `t`. |
| [**makeFloor**](../../incomplete-docs.md) | Updates each component to the component-wise minimum between this vector and `v`. |
| [**makeCeil**](../../incomplete-docs.md) | Updates each component to the component-wise maximum between this vector and `v`. |
| [**perpendicular**](../../incomplete-docs.md) | Calculates a normalized unit vector perpendicular (orthogonal) to this vector. |
| [**reflect**](../../incomplete-docs.md) | Calculates the reflection vector off a surface defined by a normal vector. |





















