###### version: v0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Static Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector2**](vector2.md) | [**ZERO**](../../incomplete-docs.md) | Shorthand for writing `Vector2(0, 0)`. |
| [**Vector2**](vector2.md) | [**UNIT_X**](../../incomplete-docs.md) | Shorthand for writing `Vector2(1, 0)`. |
| [**Vector2**](vector2.md) | [**UNIT_Y**](../../incomplete-docs.md) | Shorthand for writing `Vector2(0, 1)`. |
| [**Vector2**](vector2.md) | [**NEGATIVE_UNIT_X**](../../incomplete-docs.md) | Shorthand for writing `Vector2(-1, 0)`. |
| [**Vector2**](vector2.md) | [**NEGATIVE_UNIT_Y**](../../incomplete-docs.md) | Shorthand for writing `Vector2(0, -1)`. |
| [**Vector2**](vector2.md) | [**UNIT_SCALE**](../../incomplete-docs.md) | Shorthand for writing `Vector2(1, 1)`. |

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**x**](../../incomplete-docs.md) | X component of the vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**y**](../../incomplete-docs.md) | Y component of the vector. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| | Default constructor. Initializes components to zero. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) fX, [**float**](https://en.cppreference.com/cpp/keyword/float) fY | Constructs a vector with specified X and Y components. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& v | Copy constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) scaler | Constructs a vector with both components set to a scalar value. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) afCoordinate[2] | Constructs a vector from a 2-element float array. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) afCoordinate[2] | Constructs a vector from a 2-element integer array. |
| [**float**](https://en.cppreference.com/cpp/keyword/float)* [**const**](https://en.cppreference.com/cpp/keyword/const) r | Constructs a vector from a float pointer to array elements. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& vec3 | Constructs a 2D vector from the X and Y components of a 3D vector. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& vec4 | Constructs a 2D vector from the X and Y components of a 4D vector. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](../../incomplete-docs.md) | [**size_t**](https://en.cppreference.com/cpp/types/size_t) i | Access component value by index (`0` for x, `1` for y). |
| [**float**](https://en.cppreference.com/cpp/keyword/float)& | [**operator []**](../../incomplete-docs.md) | [**size_t**](https://en.cppreference.com/cpp/types/size_t) i | Access component reference by index (`0` for x, `1` for y). |
| [**Vector2**](vector2.md)& | [**operator =**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rkVector | Assigns values from another vector. |
| [**Vector2**](vector2.md)& | [**operator =**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Assigns a scalar value to both components. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rkVector | Checks component-wise equality with another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rkVector | Checks component-wise inequality with another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator <**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rhs | Returns true if both x and y are strictly less than target vector's components. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator >**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rhs | Returns true if both x and y are strictly greater than target vector's components. |
| [**Vector2**](vector2.md) | [**operator +**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rkVector | Performs component-wise addition. |
| [**Vector2**](vector2.md) | [**operator +**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) rhs | Performs scalar addition. |
| [**Vector2**](vector2.md) | [**operator -**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rkVector | Performs component-wise subtraction. |
| [**Vector2**](vector2.md) | [**operator -**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) rhs | Performs scalar subtraction. |
| [**Vector2**](vector2.md) | [**operator \***](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rhs | Performs component-wise multiplication. |
| [**Vector2**](vector2.md) | [**operator \***](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Performs scalar multiplication. |
| [**Vector2**](vector2.md) | [**operator /**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rhs | Performs component-wise division. |
| [**Vector2**](vector2.md) | [**operator /**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Performs scalar division. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& | [**operator +**](../../incomplete-docs.md) | | Unary positive operator. |
| [**Vector2**](vector2.md) | [**operator -**](../../incomplete-docs.md) | | Unary negation operator. |
| [**Vector2**](vector2.md)& | [**operator +=**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rkVector | Adds vector in-place. |
| [**Vector2**](vector2.md)& | [**operator +=**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScaler | Adds scalar in-place. |
| [**Vector2**](vector2.md)& | [**operator -=**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rkVector | Subtracts vector in-place. |
| [**Vector2**](vector2.md)& | [**operator -=**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScaler | Subtracts scalar in-place. |
| [**Vector2**](vector2.md)& | [**operator \*=**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rkVector | Component-wise multiplies in-place. |
| [**Vector2**](vector2.md)& | [**operator \*=**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Multiplies by scalar in-place. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**absDotProduct**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& vec | Calculates the sum of absolute products of corresponding components. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**crossProduct**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rkVector | Calculates the 2D cross product scalar perpendicular to both vectors. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**distance**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rhs | Calculates the Euclidean distance to another point. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**dotProduct**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& vec | Calculates the scalar dot product with another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isValid**](../../incomplete-docs.md) | | Checks that `x`, `y` components are finite numbers. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**length**](../../incomplete-docs.md) | | Calculates the magnitude (length) of the vector. |
| [**Vector2**](vector2.md) | [**lerp**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& target, [**float**](https://en.cppreference.com/cpp/keyword/float) t | Linearly interpolates between this vector and a target vector by factor `t`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**makeCeil**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& cmp | Updates each component to the component-wise maximum between this vector and `cmp`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**makeFloor**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& cmp | Updates each component to the component-wise minimum between this vector and `cmp`. |
| [**Vector2**](vector2.md) | [**midPoint**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& vec | Calculates the midpoint between this vector and another position vector. |
| [**Vector2**](vector2.md) | [**moveTowards**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& target, [**float**](https://en.cppreference.com/cpp/keyword/float) maxDistanceDelta | Moves the vector toward a target point by a maximum distance step. |
| [**Vector2**](vector2.md)& | [**normalize**](../../incomplete-docs.md) | | Normalizes the vector in-place to unit length and returns a reference to itself. |
| [**Vector2**](vector2.md) | [**normalized**](../../incomplete-docs.md) | | Returns a normalized unit-length copy of this vector without modifying the original. |
| [**Vector2**](vector2.md) | [**normalizedCopy**](../../incomplete-docs.md) | | Returns a normalized unit-length copy of this vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**normalizeL**](../../incomplete-docs.md) | | Normalizes the vector in-place and returns its original magnitude. |
| [**Vector2**](vector2.md) | [**perpendicular**](../../incomplete-docs.md) | | Calculates a normalized unit vector perpendicular (orthogonal) to this vector. |
| [**Vector2**](vector2.md) | [**reflect**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& normal | Calculates the reflection vector off a surface defined by a normal vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**squaredDistance**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](vector2.md)& rhs | Calculates the squared distance to another point without square root overhead. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**squaredLength**](../../incomplete-docs.md) | | Calculates the squared magnitude of the vector without performing a square root. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**swap**](../../incomplete-docs.md) | [**Vector2**](vector2.md)& other | Swaps component values with another vector in-place. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**toString**](../../incomplete-docs.md) | | Returns a formatted string representation of the vector. |