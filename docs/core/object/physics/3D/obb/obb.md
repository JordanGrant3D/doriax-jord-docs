---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
OBB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## OBB

An **Oriented Bounding Box** — a box whose axes can rotate arbitrarily in world space, stored as a center, half extents, and three axis vectors. OBBs fit non-axis-aligned objects more tightly than an [**AABB**](../../2D/aabb/aabb.md) at the cost of more complex intersection tests.

## Static Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**OBB**](obb.md) | [**ZERO**](obb-zero.md) | A null OBB used as an initializer. |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Constructs a default OBB (null box). |
| [**BoxType**](../../box-type.md) boxType | Constructs an OBB with a specific box type. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](obb.md)& obb | Copy constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& center, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& halfExtents | Constructs an OBB with center and half extents. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& center, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& halfExtents, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& axisX, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& axisY, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& axisZ | Constructs an OBB with center, half extents, and axes. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](../../2D/aabb/aabb.md)& aabb | Constructs an OBB from an AABB. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](../../2D/aabb/aabb.md)& aabb, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](../../../../maths/matrix4/matrix4.md)& transform | Constructs an OBB from an AABB and a transform matrix. |

## Destructor
| Arguments | Description |
| :--- | :--- |
|  | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**OBB**](obb.md)& | [**operator=**](obb-operators.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](obb.md)& rhs | Assignment operator. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator==**](obb-operators.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](obb.md)& rhs | Checks equality between two OBBs. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator!=**](obb-operators.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](obb.md)& rhs | Checks inequality between two OBBs. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**toString**](obb-to-string.md) |  | Returns a string representation of the OBB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setNull**](obb-state.md) |  | Sets the box to a null state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isNull**](obb-state.md) |  | Checks if the box is in a null state. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setInfinite**](obb-state.md) |  | Sets the box to an infinite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isInfinite**](obb-state.md) |  | Checks if the box is in an infinite state. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFinite**](obb-state.md) |  | Sets the box to a finite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFinite**](obb-state.md) |  | Checks if the box is in a finite state. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& | [**getCenter**](obb-center.md) |  | Gets the center point of the OBB (const). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCenter**](obb-center.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& center | Sets the center point of the OBB. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& | [**getHalfExtents**](obb-half-extents.md) |  | Gets the half extents of the OBB (const). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setHalfExtents**](obb-half-extents.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& halfExtents | Sets the half extents of the OBB. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& | [**getAxisX**](obb-axes.md) |  | Gets the X axis of the OBB (const). |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& | [**getAxisY**](obb-axes.md) |  | Gets the Y axis of the OBB (const). |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& | [**getAxisZ**](obb-axes.md) |  | Gets the Z axis of the OBB (const). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAxes**](obb-axes.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& axisX, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& axisY, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& axisZ | Sets the axes of the OBB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAxes**](obb-axes.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](../../../../maths/quaternion/quaternion.md)& orientation | Sets the axes from an orientation quaternion. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setOrientation**](obb-orientation.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](../../../../maths/quaternion/quaternion.md)& orientation | Sets the orientation of the OBB. |
| [**Quaternion**](../../../../maths/quaternion/quaternion.md) | [**getOrientation**](obb-orientation.md) |  | Gets the orientation of the OBB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**transform**](obb-transform.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](../../../../maths/matrix4/matrix4.md)& matrix | Transforms the OBB by a matrix. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**transform**](obb-transform.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& translate, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](../../../../maths/quaternion/quaternion.md)& rotate, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& scale | Transforms the OBB by translation, rotation, and scale. |
| [**AABB**](../../2D/aabb/aabb.md) | [**toAABB**](obb-convert.md) |  | Converts the OBB to an AABB representation. |
| [**Matrix4**](../../../../maths/matrix4/matrix4.md) | [**toMatrix**](obb-convert.md) |  | Converts the OBB to a matrix representation. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getCorner**](obb-corners.md) | [**CornerEnum**](obb-corner-enum.md) cornerToGet | Gets a specific corner of the OBB. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)* | [**getCorners**](obb-corners.md) |  | Gets an array of all 8 corner points (const). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**enclose**](obb-enclose.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](obb.md)& other | Encloses another OBB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**enclose**](obb-enclose.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& point | Encloses a point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](obb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](obb.md)& other | Checks for intersection with another OBB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](obb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](../../2D/aabb/aabb.md)& aabb | Checks for intersection with an AABB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](obb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](../../../../maths/sphere/sphere.md)& sphere | Checks for intersection with a Sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](obb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](../../../../maths/plane/plane.md)& plane | Checks for intersection with a Plane. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](obb-intersects.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& point | Checks for intersection with a point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](obb-contains.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& point | Checks if the OBB contains a point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](obb-contains.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](obb.md)& other | Checks if the OBB contains another OBB. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**squaredDistance**](obb-distance.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& point | Calculates the squared distance to a point. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**distance**](obb-distance.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& point | Calculates the distance to a point. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**volume**](obb-volume.md) |  | Calculates the volume of the OBB. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**closestPoint**](obb-closest-point.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../../../../maths/vector3/vector3.md)& point | Calculates the closest point on the OBB to a given point. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
