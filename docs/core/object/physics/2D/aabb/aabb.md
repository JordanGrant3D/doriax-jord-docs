---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
AABB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## AABB

An **Axis-Aligned Bounding Box** defined by a minimum and maximum [**Vector3**](../../../../maths/vector3/vector3.md) corner. All edges stay parallel to the world axes, making overlap tests extremely fast. AABBs are used for mesh bounds queries, frustum culling, and physics broad-phase. For rotated bounding volumes use [**OBB**](aabb-get-obb.md).

## Static Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**AABB**](aabb.md) | [**ZERO**](aabb-zero.md) | A valid AABB with all extents at zero (not a null box). |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Constructs a default AABB (null box). |
| [**BoxType**](../../box-type.md) e | Constructs an AABB with a specific box type. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](aabb.md)& rkBox | Copy constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& min, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& max | Constructs an AABB with specified minimum and maximum points. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) mx, [**float**](https://en.cppreference.com/cpp/keyword/float) my, [**float**](https://en.cppreference.com/cpp/keyword/float) mz, [**float**](https://en.cppreference.com/cpp/keyword/float) Mx, [**float**](https://en.cppreference.com/cpp/keyword/float) My, [**float**](https://en.cppreference.com/cpp/keyword/float) Mz | Constructs an AABB with specified coordinate components. |

## Destructor

| Arguments | Description |
| :--- | :--- |
|  | Destructor. |



## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**AABB**](aabb.md)& | [**operator=**](aabb-operators.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](aabb.md)& rhs | Assignment operator. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator==**](aabb-operators.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](aabb.md)& rhs | Checks equality between two AABBs. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator!=**](aabb-operators.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](aabb.md)& rhs | Checks inequality between two AABBs. |
| [**OBB**](../../3D/obb/obb.md) | [**getOBB**](aabb-get-obb.md) |  | Gets the oriented bounding box (OBB) representation of this AABB. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& | [**getMinimum**](aabb-minimum.md) |  | Gets the minimum corner point (const). |
| [**Vector3**](../../../../maths/vector3/vector3.md)& | [**getMinimum**](aabb-minimum.md) |  | Gets the minimum corner point. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& | [**getMaximum**](aabb-maximum.md) |  | Gets the maximum corner point (const). |
| [**Vector3**](../../../../maths/vector3/vector3.md)& | [**getMaximum**](aabb-maximum.md) |  | Gets the maximum corner point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimum**](aabb-minimum.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& vec | Sets the minimum corner point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimum**](aabb-minimum.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the minimum corner point coordinates. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimumX**](aabb-minimum.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x | Sets the X coordinate of the minimum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimumY**](aabb-minimum.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) y | Sets the Y coordinate of the minimum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMinimumZ**](aabb-minimum.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the Z coordinate of the minimum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximum**](aabb-maximum.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& vec | Sets the maximum corner point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximum**](aabb-maximum.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the maximum corner point coordinates. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximumX**](aabb-maximum.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x | Sets the X coordinate of the maximum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximumY**](aabb-maximum.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) y | Sets the Y coordinate of the maximum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMaximumZ**](aabb-maximum.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the Z coordinate of the maximum point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setExtents**](aabb-set-extents.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& min, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& max | Sets the minimum and maximum extents. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setExtents**](aabb-set-extents.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) mx, [**float**](https://en.cppreference.com/cpp/keyword/float) my, [**float**](https://en.cppreference.com/cpp/keyword/float) mz, [**float**](https://en.cppreference.com/cpp/keyword/float) Mx, [**float**](https://en.cppreference.com/cpp/keyword/float) My, [**float**](https://en.cppreference.com/cpp/keyword/float) Mz | Sets the minimum and maximum extents using component values. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getCorner**](aabb-corners.md) | [**CornerEnum**](aabb-corner-enum.md) cornerToGet | Gets a specific corner of the AABB. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)* | [**getCorners**](aabb-corners.md) |  | Gets an array of all 8 corner points (const). |
| [**AABB**](aabb.md)& | [**merge**](aabb-merge.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](aabb.md)& rhs | Merges this box with another AABB. |
| [**AABB**](aabb.md)& | [**merge**](aabb-merge.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& point | Merges this box with a point. |
| [**AABB**](aabb.md)& | [**transform**](aabb-transform.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](../../../../maths/matrix4/matrix4.md)& matrix | Transforms this AABB by a matrix. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setNull**](aabb-state.md) |  | Sets the box to a null state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isNull**](aabb-state.md) |  | Checks if the box is in a null state. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setInfinite**](aabb-state.md) |  | Sets the box to an infinite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isInfinite**](aabb-state.md) |  | Checks if the box is in an infinite state. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFinite**](aabb-state.md) |  | Sets the box to a finite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFinite**](aabb-state.md) |  | Checks if the box is in a finite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](aabb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](aabb.md)& b2 | Checks for intersection with another AABB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](aabb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](../../3D/obb/obb.md)& obb | Checks for intersection with an OBB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](aabb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](../../../../maths/plane/plane.md)& p | Checks for intersection with a Plane. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](aabb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](../../../../maths/sphere/sphere.md)& sp | Checks for intersection with a Sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](aabb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& v | Checks for intersection with a point. |
| [**AABB**](aabb.md) | [**intersection**](aabb-intersection.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](aabb.md)& b2 | Calculates the intersection box with another AABB. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**volume**](aabb-volume.md) |  | Calculates the volume of the AABB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**scale**](aabb-scale.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& s | Scales the AABB by a vector. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getCenter**](aabb-measure.md) |  | Gets the center point of the AABB. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getSize**](aabb-measure.md) |  | Gets the size (dimensions) of the AABB. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getHalfSize**](aabb-measure.md) |  | Gets the half-size dimensions of the AABB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](aabb-contains.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& v | Checks if the AABB contains a point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](aabb-contains.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](aabb.md)& other | Checks if the AABB contains another AABB. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**squaredDistance**](aabb-distance.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& v | Calculates the squared distance to a point. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**distance**](aabb-distance.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& v | Calculates the distance to a point. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
