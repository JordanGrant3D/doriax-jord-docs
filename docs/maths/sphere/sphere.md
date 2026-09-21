[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector3**](../vector3/vector3.md) | [**center**](sphere-center.md) | 3D center position. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**radius**](sphere-radius.md) | Radius of the sphere. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| | Default constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& center, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Constructs a sphere with a specified center position and radius. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Copy constructor. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Sphere**](sphere.md)& | [**operator =**](sphere-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Assigns values from another sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](sphere-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Checks equality with another sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](sphere-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Checks inequality with another sphere. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](sphere-contains.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& point | Checks if the 3D point is within the sphere's bounds. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](sphere-intersects-sphere.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Checks if the sphere intersects with the target sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](sphere-intersects-aabb.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](../../core/object/physics/2D/aabb/aabb.md)& aabb | Checks if the sphere intersects with the target AABB collider. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](sphere-intersects-obb.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](../../core/object/physics/3D/obb/obb.md)& obb | Checks if the sphere intersects with the target OBB collider. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](sphere-intersects-plane.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](../plane/plane.md)& plane | Checks if the sphere intersects with the target plane. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](sphere-intersects-point.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& v | Same as `bool contains(const Vector3& point)`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**merge**](sphere-merge.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Updates the current sphere to become the smallest bounding sphere that completely encloses both itself and other. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**surfaceArea**](sphere-surface-area.md) | | Calculates sphere's surface area. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**volume**](sphere-volume.md) | | Calculates sphere's volume. |
