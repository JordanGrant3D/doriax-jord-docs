[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Plane

A 3D plane in Hessian normal form: every point `p` on the plane satisfies `normal.dotProduct(p) + d == 0`.
CharacterController-style gameplay uses planes for ground floors, landing checks and slope slides.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector3**](../vector3/vector3.md) | [**normal**](plane-normal.md) | Unit normal direction perpendicular to the plane surface. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**d**](plane-d.md) | Signed distance offset: points satisfy `normal.dotProduct(p) + d == 0`. |

## Enum

| Type | Value | Description |
| :--- | :--- | :--- |
| [**Side**](plane-side.md) | `NO_SIDE` | Returned for null boxes or points exactly on the plane. |
| [**Side**](plane-side.md) | `POSITIVE_SIDE` | The point or box lies on the side the normal points toward. |
| [**Side**](plane-side.md) | `NEGATIVE_SIDE` | The point or box lies on the opposite side from the normal. |
| [**Side**](plane-side.md) | `BOTH_SIDE` | The box straddles the plane (returned by the box overloads only). |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Zero normal, zero offset. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](plane.md)& rhs | Copy constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkNormal, [**float**](https://en.cppreference.com/cpp/keyword/float) fConstant | Constructs a plane from a normal and a constant (`d` becomes `-fConstant`). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) a, [**float**](https://en.cppreference.com/cpp/keyword/float) b, [**float**](https://en.cppreference.com/cpp/keyword/float) c, [**float**](https://en.cppreference.com/cpp/keyword/float) _d | Constructs a plane from raw `normal(x, y, z)` components and offset `d`. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkNormal, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint | Constructs a plane from a normal and a point lying on it. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint0, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint1, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint2 | Constructs a plane through three points (e.g. a ramp triangle). |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Plane**](plane.md) | [**operator -**](plane-operator-negate.md) |  | Flips the plane facing: negates both `normal` and `d`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](plane-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](plane.md)& rhs | Checks equality of `normal` and `d` with another plane. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](plane-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](plane.md)& rhs | Checks inequality of `normal` or `d` with another plane. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getDistance**](plane-get-distance.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint | Signed distance from the plane to a point (height above ground). |
| [**Side**](plane-side.md) | [**getSide**](plane-get-side.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint | Tells which side of the plane a point lies on. |
| [**Side**](plane-side.md) | [**getSide**](plane-get-side.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& centre, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& halfSize | Tells which side of the plane a box (centre + half size) lies on. |
| [**Side**](plane-side.md) | [**getSide**](plane-get-side.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](../../../incomplete-docs.md)& box | Tells which side of the plane an AABB lies on. |
| [**Side**](plane-side.md) | [**getSide**](plane-get-side.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](../../../incomplete-docs.md)& obb | Tells which side of the plane an OBB lies on. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**redefine**](plane-redefine.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint0, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint1, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint2 | Rebuilds the plane from three points via cross product. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**redefine**](plane-redefine.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkNormal, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkPoint | Rebuilds the plane from a normal and a point lying on it. |
| [**Vector3**](../vector3/vector3.md) | [**projectVector**](plane-project-vector.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& p | Projects a vector onto the plane (slope slide direction). |
| [**Plane**](plane.md)& | [**normalize**](plane-normalize.md) |  | Normalizes the plane in place and returns a reference to itself. |
| [**Plane**](plane.md) | [**normalized**](plane-normalized.md) |  | Returns a normalized copy without modifying the original. |
