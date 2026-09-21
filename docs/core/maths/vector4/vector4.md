[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Static Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector4**](vector4.md) | [**ZERO**](vector4-zero.md) | Shorthand for writing `Vector4(0, 0, 0, 0)`. |
| [**Vector4**](vector4.md) | [**UNIT_X**](vector4-unit-x.md) | Shorthand for writing `Vector4(1, 0, 0, 0)`. |
| [**Vector4**](vector4.md) | [**UNIT_Y**](vector4-unit-y.md) | Shorthand for writing `Vector4(0, 1, 0, 0)`. |
| [**Vector4**](vector4.md) | [**UNIT_Z**](vector4-unit-z.md) | Shorthand for writing `Vector4(0, 0, 1, 0)`. |
| [**Vector4**](vector4.md) | [**UNIT_W**](vector4-unit-w.md) | Shorthand for writing `Vector4(0, 0, 0, 1)`. |
| [**Vector4**](vector4.md) | [**UNIT_SCALE**](vector4-unit-scale.md) | Shorthand for writing `Vector4(1, 1, 1, 1)`. |

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**x**](vector4-x.md) | X component of the vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**y**](vector4-y.md) | Y component of the vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**z**](vector4-z.md) | Z component of the vector. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**w**](vector4-w.md) | W component of the vector. |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Initializes components to zero. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fX, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fY, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fZ, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fW | Constructs a vector with specified X, Y, Z, and W components. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rhs | Copy constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) afCoordinate[4] | Constructs a vector from a 4-element float array. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) afCoordinate[4] | Constructs a vector from a 4-element integer array. |
| [**float**](https://en.cppreference.com/cpp/keyword/float)\* [**const**](https://en.cppreference.com/cpp/keyword/const) r | Constructs a vector from a float pointer to array elements. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) scaler | Constructs a vector with all components set to a scalar value. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector2**](../vector2/vector2.md)& rhs, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fZ, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fW | Constructs a 4D vector from a 2D vector, Z, and W components. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rhs, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fW | Constructs a 4D vector from a 3D vector and a W component. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](vector4-operator-index.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) i | Access component value by index (`0` for x, `1` for y, `2` for z, `3` for w). |
| [**float&**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](vector4-operator-index.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) i | Access component reference by index (`0` for x, `1` for y, `2` for z, `3` for w). |
| [**Vector4**](vector4.md)& | [**operator =**](vector4-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rkVector | Assigns values from another vector. |
| [**Vector4**](vector4.md)& | [**operator =**](vector4-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Assigns a scalar value to all components. |
| [**Vector4**](vector4.md)& | [**operator =**](vector4-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rhs | Assigns X, Y, and Z components from a 3D vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](vector4-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rkVector | Checks component-wise equality with another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](vector4-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rkVector | Checks component-wise inequality with another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator <**](vector4-operator-less.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& v | Returns true if all components are strictly less than target vector's components. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator >**](vector4-operator-greater.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& v | Returns true if all components are strictly greater than target vector's components. |
| [**Vector4**](vector4.md) | [**operator +**](vector4-operator-add.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rkVector | Performs component-wise addition. |
| [**Vector4**](vector4.md) | [**operator +**](vector4-operator-add.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) rhs | Performs scalar addition. |
| [**Vector4**](vector4.md) | [**operator -**](vector4-operator-subtract.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rkVector | Performs component-wise subtraction. |
| [**Vector4**](vector4.md) | [**operator -**](vector4-operator-subtract.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) rhs | Performs scalar subtraction. |
| [**Vector4**](vector4.md) | [**operator \***](vector4-operator-multiply.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rhs | Performs component-wise multiplication. |
| [**Vector4**](vector4.md) | [**operator \***](vector4-operator-multiply.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Performs scalar multiplication. |
| [**Vector4**](vector4.md) | [**operator /**](vector4-operator-divide.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rhs | Performs component-wise division. |
| [**Vector4**](vector4.md) | [**operator /**](vector4-operator-divide.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Performs scalar division. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& | [**operator +**](vector4-operator-add.md) |  | Unary positive operator. |
| [**Vector4**](vector4.md) | [**operator -**](vector4-operator-subtract.md) |  | Unary negation operator. |
| [**Vector4**](vector4.md)& | [**operator +=**](vector4-operator-add-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rkVector | Adds vector in-place. |
| [**Vector4**](vector4.md)& | [**operator +=**](vector4-operator-add-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Adds scalar in-place. |
| [**Vector4**](vector4.md)& | [**operator -=**](vector4-operator-subtract-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rkVector | Subtracts vector in-place. |
| [**Vector4**](vector4.md)& | [**operator -=**](vector4-operator-subtract-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Subtracts scalar in-place. |
| [**Vector4**](vector4.md)& | [**operator \*=**](vector4-operator-multiply-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rkVector | Component-wise multiplies in-place. |
| [**Vector4**](vector4.md)& | [**operator \*=**](vector4-operator-multiply-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Multiplies by scalar in-place. |
| [**Vector4**](vector4.md)& | [**operator /=**](vector4-operator-divide-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& rkVector | Component-wise divides in-place. |
| [**Vector4**](vector4.md)& | [**operator /=**](vector4-operator-divide-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Divides by scalar in-place. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**divideByW**](vector4-divide-by-w.md) |  | Divides `x`, `y`, and `z` components by `w`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**dotProduct**](vector4-dot-product.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](vector4.md)& vec | Calculates the scalar dot product with another vector. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isNaN**](vector4-is-nan.md) |  | Checks if any component (`x`, `y`, `z`, `w`) is NaN. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isValid**](vector4-is-valid.md) |  | Checks that `x`, `y`, `z`, and `w` components are finite numbers. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**swap**](vector4-swap.md) | [**Vector4**](vector4.md)& other | Swaps component values with another vector in-place. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**toString**](vector4-to-string.md) |  | Returns a formatted string representation of the vector. |
