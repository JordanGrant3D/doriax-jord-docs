###### version: v0.7.1
---
AABB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Constructors

| Arguments | Description |
| :--- | :--- |
| | Constructs a default AABB (null box). |
| [**BoxType**](../../box-type.md) e | Constructs an AABB with a specific box type. |
| [**AABB**]() rkBox | Copy constructor. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) min, [**Vector3**](../../../../../maths/vector3/vector3.md) max | Constructs an AABB with specified minimum and maximum points. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) mx, [**float**](https://en.cppreference.com/cpp/keyword/float) my, [**float**](https://en.cppreference.com/cpp/keyword/float) mz, [**float**](https://en.cppreference.com/cpp/keyword/float) Mx, [**float**](https://en.cppreference.com/cpp/keyword/float) My, [**float**](https://en.cppreference.com/cpp/keyword/float) Mz | Constructs an AABB with specified coordinate components. |

## Destructor

| Arguments | Description |
| :--- | :--- |
|  | Destructor. |



## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**AABB**]() | [**operator=**](../../../../../incomplete-docs.md) | [**AABB**]() rhs | Assignment operator. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator==**](../../../../../incomplete-docs.md) | [**AABB**]() rhs | Checks equality between two AABBs. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator!=**](../../../../../incomplete-docs.md) | [**AABB**]() rhs | Checks inequality between two AABBs. |
| [**OBB**](../../../../../incomplete-docs.md) | [**getOBB**](../../../../../incomplete-docs.md) | | Gets the oriented bounding box (OBB) representation of this AABB. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) | [**getMinimum**](../../../../../incomplete-docs.md) | | Gets the minimum corner point (const). |
| [**Vector3**](../../../../../maths/vector3/vector3.md) | [**getMinimum**](../../../../../incomplete-docs.md) | | Gets the minimum corner point. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) | [**getMaximum**](../../../../../incomplete-docs.md) | | Gets the maximum corner point (const). |
| [**Vector3**](../../../../../maths/vector3/vector3.md) | [**getMaximum**](../../../../../incomplete-docs.md) | | Gets the maximum corner point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimum**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) vec | Sets the minimum corner point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimum**](../../../../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the minimum corner point coordinates. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimumX**](../../../../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x | Sets the X coordinate of the minimum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimumY**](../../../../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) y | Sets the Y coordinate of the minimum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimumZ**](../../../../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the Z coordinate of the minimum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximum**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) vec | Sets the maximum corner point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximum**](../../../../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the maximum corner point coordinates. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximumX**](../../../../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x | Sets the X coordinate of the maximum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximumY**](../../../../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) y | Sets the Y coordinate of the maximum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximumZ**](../../../../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the Z coordinate of the maximum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setExtents**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) min, [**Vector3**](../../../../../maths/vector3/vector3.md) max | Sets the minimum and maximum extents. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setExtents**](../../../../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) mx, [**float**](https://en.cppreference.com/cpp/keyword/float) my, [**float**](https://en.cppreference.com/cpp/keyword/float) mz, [**float**](https://en.cppreference.com/cpp/keyword/float) Mx, [**float**](https://en.cppreference.com/cpp/keyword/float) My, [**float**](https://en.cppreference.com/cpp/keyword/float) Mz | Sets the minimum and maximum extents using component values. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) | [**getCorner**](../../../../../incomplete-docs.md) | [**CornerEnum**](../../../../../incomplete-docs.md) cornerToGet | Gets a specific corner of the AABB. |
| [**Vector3**](../../../../../maths/vector3/vector3.md)* | [**getCorners**](../../../../../incomplete-docs.md) | | Gets an array of all 8 corner points (const). |
| [**AABB**]()& | [**merge**](../../../../../incomplete-docs.md) | [**AABB**]() rhs | Merges this box with another AABB. |
| [**AABB**]()& | [**merge**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) point | Merges this box with a point. |
| [**AABB**]()& | [**transform**](../../../../../incomplete-docs.md) | [**Matrix4**](../../../../../incomplete-docs.md) matrix | Transforms this AABB by a matrix. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setNull**](../../../../../incomplete-docs.md) | | Sets the box to a null state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isNull**](../../../../../incomplete-docs.md) | | Checks if the box is in a null state. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setInfinite**](../../../../../incomplete-docs.md) | | Sets the box to an infinite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isInfinite**](../../../../../incomplete-docs.md) | | Checks if the box is in an infinite state. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFinite**](../../../../../incomplete-docs.md) | | Sets the box to a finite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFinite**](../../../../../incomplete-docs.md) | | Checks if the box is in a finite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**AABB**]() b2 | Checks for intersection with another AABB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**OBB**](../../../../../incomplete-docs.md) obb | Checks for intersection with an OBB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**Plane**](../../../../../incomplete-docs.md) p | Checks for intersection with a Plane. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**Sphere**](../../../../../incomplete-docs.md) sp | Checks for intersection with a Sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) v | Checks for intersection with a point. |
| [**AABB**]() | [**intersection**](../../../../../incomplete-docs.md) | [**AABB**]() b2 | Calculates the intersection box with another AABB. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**volume**](../../../../../incomplete-docs.md) | | Calculates the volume of the AABB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**scale**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) s | Scales the AABB by a vector. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) | [**getCenter**](../../../../../incomplete-docs.md) | | Gets the center point of the AABB. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) | [**getSize**](../../../../../incomplete-docs.md) | | Gets the size (dimensions) of the AABB. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) | [**getHalfSize**](../../../../../incomplete-docs.md) | | Gets the half-size dimensions of the AABB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) v | Checks if the AABB contains a point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](../../../../../incomplete-docs.md) | [**AABB**]() other | Checks if the AABB contains another AABB. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**squaredDistance**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) v | Calculates the squared distance to a point. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**distance**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) v | Calculates the distance to a point. |