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
| [**Vector3**](../vector3/vector3.md) | [**center**](../../incomplete-docs.md) | 3D center position. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**radius**](../../incomplete-docs.md) | Radius of the sphere. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| | Default constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& center, [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Constructs a sphere with a specified center position and radius. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Copy constructor. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Sphere**](sphere.md)& | [**operator =**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Assigns values from another sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Checks equality with another sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Checks inequality with another sphere. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& point | Checks if the 3D point is within the sphere's bounds. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Checks if the sphere intersects with the target sphere. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](../../incomplete-docs.md)& aabb | Checks if the sphere intersects with the target AABB collider. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](../../incomplete-docs.md)& obb | Checks if the sphere intersects with the target OBB collider. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](../../incomplete-docs.md)& plane | Checks if the sphere intersects with the target plane. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**intersects**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& v | Same as `bool contains(const Vector3& point)`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**merge**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Sphere**](sphere.md)& other | Updates the current sphere to become the smallest bounding sphere that completely encloses both itself and other. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**surfaceArea**](../../incomplete-docs.md) | | Calculates sphere's surface area. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**volume**](../../incomplete-docs.md) | | Calculates sphere's volume. |