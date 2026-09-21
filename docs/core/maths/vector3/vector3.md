[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Static Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector3**](vector3.md) | [**ZERO**](vector3-zero.md) | Shorthand for writing `Vector3(0, 0, 0)`. |
| [**Vector3**](vector3.md) | [**UNIT_X**](vector3-unit-x.md) | Shorthand for writing `Vector3(1, 0, 0)`. |
| [**Vector3**](vector3.md) | [**UNIT_Y**](vector3-unit-y.md) | Shorthand for writing `Vector3(0, 1, 0)`. |
| [**Vector3**](vector3.md) | [**UNIT_Z**](vector3-unit-z.md) | Shorthand for writing `Vector3(0, 0, 1)`. |
| [**Vector3**](vector3.md) | [**UNIT_SCALE**](vector3-unit-scale.md) | Shorthand for writing `Vector3(1, 1, 1)`. |

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**x**](vector3-x.md) | X component of the vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**y**](vector3-y.md) | Y component of the vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**z**](vector3-z.md) | Z component of the vector. |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Initializes components to zero. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) nx, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) ny, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) nz | Constructs a vector with specified X, Y, and Z components. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Copy constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) v[3] | Constructs a vector from a 3-element float array. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) v[3] | Constructs a vector from a 3-element integer array. |
| [**float**](https://en.cppreference.com/cpp/keyword/float)\* [**const**](https://en.cppreference.com/cpp/keyword/const) v | Constructs a vector from a float pointer to array elements. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) scaler | Constructs a vector with all components set to a scalar value. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](../vector2/vector2.md)& vec2, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) nz | Constructs a 3D vector from a 2D vector and a Z component. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& vec4 | Constructs a 3D vector from the X, Y, and Z components of a 4D vector. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](vector3-operator-index.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) i | Access component value by index (`0` for x, `1` for y, `2` for z). |
| [**float&**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](vector3-operator-index.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) i | Access component reference by index (`0` for x, `1` for y, `2` for z). |
| [**Vector3**](vector3.md)& | [**operator =**](vector3-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Assigns values from another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](vector3-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Checks component-wise equality with another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](vector3-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Checks component-wise inequality with another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator <**](vector3-operator-less.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Returns true if all components are strictly less than target vector's components. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator >**](vector3-operator-greater.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Returns true if all components are strictly greater than target vector's components. |
| [**Vector3**](vector3.md) | [**operator +**](vector3-operator-add.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Performs component-wise addition. |
| [**Vector3**](vector3.md) | [**operator -**](vector3-operator-subtract.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Performs component-wise subtraction. |
| [**Vector3**](vector3.md) | [**operator \***](vector3-operator-multiply.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Performs component-wise multiplication. |
| [**Vector3**](vector3.md) | [**operator \***](vector3-operator-multiply.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) f | Performs scalar multiplication. |
| [**Vector3**](vector3.md) | [**operator /**](vector3-operator-divide.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) f | Performs scalar division. |
| [**Vector3**](vector3.md) | [**operator -**](vector3-operator-negate.md) |  | Unary negation operator. |
| [**Vector3**](vector3.md)& | [**operator +=**](vector3-operator-add-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Adds vector in-place. |
| [**Vector3**](vector3.md)& | [**operator -=**](vector3-operator-subtract-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Subtracts vector in-place. |
| [**Vector3**](vector3.md)& | [**operator \*=**](vector3-operator-multiply-assign.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) f | Multiplies by scalar in-place. |
| [**Vector3**](vector3.md)& | [**operator /=**](vector3-operator-divide-assign.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) f | Divides by scalar in-place. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**absDotProduct**](vector3-abs-dot-product.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Calculates the sum of absolute products of corresponding components. |
| [**Vector3**](vector3.md) | [**crossProduct**](vector3-cross-product.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Calculates the cross product vector perpendicular to both vectors. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**distance**](vector3-distance.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& rhs | Calculates the Euclidean distance to another point. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**dotProduct**](vector3-dot-product.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Calculates the scalar dot product with another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isValid**](vector3-is-valid.md) |  | Checks that `x`, `y`, and `z` components are finite numbers. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**length**](vector3-length.md) |  | Calculates the magnitude (length) of the vector. |
| [**Vector3**](vector3.md) | [**lerp**](vector3-lerp.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& target, [**float**](https://en.cppreference.com/cpp/keyword/float) t | Linearly interpolates between this vector and a target vector by factor `t`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**makeCeil**](vector3-make-ceil.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Updates each component to the component-wise maximum between this vector and `v`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**makeFloor**](vector3-make-floor.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Updates each component to the component-wise minimum between this vector and `v`. |
| [**Vector3**](vector3.md) | [**midPoint**](vector3-mid-point.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& v | Calculates the midpoint between this vector and another position vector. |
| [**Vector3**](vector3.md) | [**moveTowards**](vector3-move-towards.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& target, [**float**](https://en.cppreference.com/cpp/keyword/float) maxDistanceDelta | Moves the vector toward a target point by a maximum distance step. |
| [**Vector3**](vector3.md)& | [**normalize**](vector3-normalize.md) |  | Normalizes the vector in-place to unit length and returns a reference to itself. |
| [**Vector3**](vector3.md) | [**normalized**](vector3-normalized.md) |  | Returns a normalized unit-length copy of this vector without modifying the original. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**normalizeL**](vector3-normalize-l.md) |  | Normalizes the vector in-place and returns its original magnitude. |
| [**Vector3**](vector3.md) | [**perpendicular**](vector3-perpendicular.md) |  | Calculates a normalized unit vector perpendicular (orthogonal) to this vector. |
| [**Vector3**](vector3.md) | [**reflect**](vector3-reflect.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& normal | Calculates the reflection vector off a surface defined by a normal vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**squaredDistance**](vector3-squared-distance.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](vector3.md)& rhs | Calculates the squared distance to another point without square root overhead. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**squaredLength**](vector3-squared-length.md) |  | Calculates the squared magnitude of the vector without performing a square root. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**toString**](vector3-to-string.md) |  | Returns a formatted string representation of the vector. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
