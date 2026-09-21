[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
OBB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Constructors

| Arguments | Description |
| :--- | :--- |
| | Constructs a default OBB (null box). |
| [**BoxType**](../../box-type.md) boxType | Constructs an OBB with a specific box type. |
| [**OBB**]() obb | Copy constructor. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) center, [**Vector3**](../../../../../maths/vector3/vector3.md) halfExtents | Constructs an OBB with center and half extents. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) center, [**Vector3**](../../../../../maths/vector3/vector3.md) halfExtents, [**Vector3**](../../../../../maths/vector3/vector3.md) axisX, [**Vector3**](../../../../../maths/vector3/vector3.md) axisY, [**Vector3**](../../../../../maths/vector3/vector3.md) axisZ | Constructs an OBB with center, half extents, and axes. |
| [**AABB**]() aabb | Constructs an OBB from an AABB. |
| [**AABB**]() aabb, [**Matrix4**](../../../../../maths/matrix4/matrix4.md) transform | Constructs an OBB from an AABB and a transform matrix. |

## Destructor
| Arguments | Description |
| :--- | :--- |
| | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**OBB**]()& | [**operator=**](../../../../../incomplete-docs.md) | [**OBB**]() rhs | Assignment operator. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator==**](../../../../../incomplete-docs.md) | [**OBB**]() rhs | Checks equality between two OBBs. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator!=**](../../../../../incomplete-docs.md) | [**OBB**]() rhs | Checks inequality between two OBBs. |
| [**std::string**](https://en.cppreference.com/cpp/keyword/string) | [**toString**](../../../../../incomplete-docs.md) | | Returns a string representation of the OBB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setNull**](../../../../../incomplete-docs.md) | | Sets the box to a null state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isNull**](../../../../../incomplete-docs.md) | | Checks if the box is in a null state. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setInfinite**](../../../../../incomplete-docs.md) | | Sets the box to an infinite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isInfinite**](../../../../../incomplete-docs.md) | | Checks if the box is in an infinite state. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFinite**](../../../../../incomplete-docs.md) | | Sets the box to a finite state. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFinite**](../../../../../incomplete-docs.md) | | Checks if the box is in a finite state. |
| [**Vector3**](../../../../../maths/vector3/vector3.md)& | [**getCenter**](../../../../../incomplete-docs.md) | | Gets the center point of the OBB (const). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCenter**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) center | Sets the center point of the OBB. |
| [**Vector3**](../../../../../maths/vector3/vector3.md)& | [**getHalfExtents**](../../../../../incomplete-docs.md) | | Gets the half extents of the OBB (const). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setHalfExtents**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) halfExtents | Sets the half extents of the OBB. |
| [**Vector3**](../../../../../maths/vector3/vector3.md)& | [**getAxisX**](../../../../../incomplete-docs.md) | | Gets the X axis of the OBB (const). |
| [**Vector3**](../../../../../maths/vector3/vector3.md)& | [**getAxisY**](../../../../../incomplete-docs.md) | | Gets the Y axis of the OBB (const). |
| [**Vector3**](../../../../../maths/vector3/vector3.md)& | [**getAxisZ**](../../../../../incomplete-docs.md) | | Gets the Z axis of the OBB (const). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAxes**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) axisX, [**Vector3**](../../../../../maths/vector3/vector3.md) axisY, [**Vector3**](../../../../../maths/vector3/vector3.md) axisZ | Sets the axes of the OBB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAxes**](../../../../../incomplete-docs.md) | [**Quaternion**]() orientation | Sets the axes from an orientation quaternion. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setOrientation**](../../../../../incomplete-docs.md) | [**Quaternion**]() orientation | Sets the orientation of the OBB. |
| [**Quaternion**]() | [**getOrientation**](../../../../../incomplete-docs.md) | | Gets the orientation of the OBB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**transform**](../../../../../incomplete-docs.md) | [**Matrix4**]() matrix | Transforms the OBB by a matrix. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**transform**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) translate, [**Quaternion**]() rotate, [**Vector3**](../../../../../maths/vector3/vector3.md) scale | Transforms the OBB by translation, rotation, and scale. |
| [**AABB**]() | [**toAABB**](../../../../../incomplete-docs.md) | | Converts the OBB to an AABB representation. |
| [**Matrix4**]() | [**toMatrix**](../../../../../incomplete-docs.md) | | Converts the OBB to a matrix representation. |
| [**Vector3**](../../../../../maths/vector3/vector3.md) | [**getCorner**](../../../../../incomplete-docs.md) | [**CornerEnum**](../../../../../incomplete-docs.md) cornerToGet | Gets a specific corner of the OBB. |
| [**Vector3**](../../../../../maths/vector3/vector3.md)* | [**getCorners**](../../../../../incomplete-docs.md) | | Gets an array of all 8 corner points (const). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**enclose**](../../../../../incomplete-docs.md) | [**OBB**]() other | Encloses another OBB. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**enclose**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) point | Encloses a point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**OBB**]() other | Checks for intersection with another OBB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**AABB**]() aabb | Checks for intersection with an AABB. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**Sphere**](../../../../../incomplete-docs.md) sphere | Checks for intersection with a Sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**Plane**](../../../../../incomplete-docs.md) plane | Checks for intersection with a Plane. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) point | Checks for intersection with a point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) point | Checks if the OBB contains a point. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](../../../../../incomplete-docs.md) | [**OBB**]() other | Checks if the OBB contains another OBB. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**squaredDistance**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) point | Calculates the squared distance to a point. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**distance**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) point | Calculates the distance to a point. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**volume**](../../../../../incomplete-docs.md) | | Calculates the volume of the OBB. |
| [**Vector3**](https://en.cppreference.com/cpp/keyword/float) | [**closestPoint**](../../../../../incomplete-docs.md) | [**Vector3**](../../../../../maths/vector3/vector3.md) point | Calculates the closest point on the OBB to a given point. |