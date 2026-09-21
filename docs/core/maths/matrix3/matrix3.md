---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Matrix3

A 3x3 column-major rotation/scale matrix (`matrix[col][row]`). CharacterController-style
gameplay uses it to yaw characters toward their move direction, bank models into turns,
and flatten velocities onto planes (see [Plane](../plane/plane.md).projectVector).

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float)[3][3] | [**matrix**](matrix3-matrix.md) | Raw column-major entries (`matrix[col][row]`). |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Initializes to identity. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](matrix3.md)& matrix | Copy constructor. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) fEntry00 … [**float**](https://en.cppreference.com/cpp/keyword/float) fEntry22 | Constructs a matrix from nine entries in row-major argument order. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float)** matrix | Constructs a matrix by copying sixteen floats from a `float**` source buffer. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Matrix3**](matrix3.md)& | [**operator =**](matrix3-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](matrix3.md)& m | Copies all entries via `memcpy`. |
| [**Matrix3**](matrix3.md) | [**operator \***](matrix3-operator-multiply.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](matrix3.md)& m | Concatenates two rotations (`this` applied after `m` in column convention). |
| [**Matrix3**](matrix3.md) | [**operator +**](matrix3-operator-add.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](matrix3.md)& m | Row-wise matrix addition. |
| [**Matrix3**](matrix3.md) | [**operator -**](matrix3-operator-subtract.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](matrix3.md)& m | Row-wise matrix subtraction. |
| [**Matrix3**](matrix3.md)& | [**operator \*=**](matrix3-operator-multiply-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](matrix3.md)& m | Concatenates another rotation in place. |
| [**Matrix3**](matrix3.md)& | [**operator \*=**](matrix3-operator-multiply-assign-scalar.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) scalar | Scales every entry in place. |
| [**Vector3**](../vector3/vector3.md) | [**operator \***](matrix3-operator-transform.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& v | Transforms a direction vector by the matrix. |
| [**Matrix3**](matrix3.md) | [**operator \***](matrix3-operator-multiply-scalar.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) scalar | Returns a scaled copy of the matrix. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](matrix3-operator-index.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) iCol | Returns a column pointer for reading. |
| [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](matrix3-operator-index.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) iCol | Returns a column pointer for writing. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](matrix3-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](matrix3.md)& m | Byte-wise equality check via `memcmp`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](matrix3-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](matrix3.md)& m | Byte-wise inequality check via `memcmp`. |
| [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**operator float\***](matrix3-operator-float-ptr.md) |  | Casts to a raw `float*` buffer (e.g. uniform uploads). |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**operator const float\***](matrix3-operator-float-ptr.md) |  | Casts to a read-only raw `float*` buffer. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**set**](matrix3-set.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) col, [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) row, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) val | Writes a single entry. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**get**](matrix3-get.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) col, [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) row | Reads a single entry. |
| [**Vector3**](../vector3/vector3.md) | [**row**](matrix3-row.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) row | Returns a row as a `Vector3`. |
| [**Vector3**](../vector3/vector3.md) | [**column**](matrix3-column.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) column | Returns a column as a `Vector3`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRow**](matrix3-set-row.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) row, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& vec | Overwrites a row from a `Vector3`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setColumn**](matrix3-set-column.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) column, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& vec | Overwrites a column from a `Vector3`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isValid**](matrix3-is-valid.md) |  | Checks that all nine entries are finite numbers. |
| [**Matrix3**](matrix3.md)& | [**identity**](matrix3-identity.md) |  | Resets to the identity matrix in place. |
| [**Matrix3**](matrix3.md) | [**inverse**](matrix3-inverse.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) fTolerance | Returns the inverted matrix (zero matrix when singular). |
| [**Matrix3**](matrix3.md) | [**transpose**](matrix3-transpose.md) |  | Returns the transposed matrix (undoes pure rotations). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**determinant**](matrix3-determinant.md) |  | Returns the determinant (volume scale factor; zero means singular). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**calcInverse**](matrix3-calc-inverse.md) | [**Matrix3**](matrix3.md)& rkInverse, [**float**](https://en.cppreference.com/cpp/keyword/float) fTolerance | Writes the inverse into an out-parameter; `false` when singular. |
| [**Matrix3**](matrix3.md) | [**rotateMatrix**](matrix3-rotate-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& axis | Builds an axis-angle rotation matrix (static). |
| [**Matrix3**](matrix3.md) | [**rotateMatrix**](matrix3-rotate-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) azimuth, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) elevation | Builds a yaw/pitch rotation matrix (static). |
| [**Matrix3**](matrix3.md) | [**rotateXMatrix**](matrix3-rotate-x.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Builds a pitch rotation about X (static). |
| [**Matrix3**](matrix3.md) | [**rotateYMatrix**](matrix3-rotate-y.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Builds a yaw rotation about Y (static). |
| [**Matrix3**](matrix3.md) | [**rotateZMatrix**](matrix3-rotate-z.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Builds a roll rotation about Z (static). |
| [**Matrix3**](matrix3.md) | [**scaleMatrix**](matrix3-scale-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) sf | Builds a uniform scale matrix (static). |
| [**Matrix3**](matrix3.md) | [**scaleMatrix**](matrix3-scale-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& sf | Builds a per-axis scale matrix (static). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**decomposeQDU**](matrix3-decompose-qdu.md) | [**Matrix3**](matrix3.md)& kQ, [**Vector3**](../vector3/vector3.md)& kD, [**Vector3**](../vector3/vector3.md)& kU | Splits the matrix into orthogonal `Q`, scale `D` and shear `U` parts. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**toString**](matrix3-to-string.md) |  | Returns a formatted string representation of the matrix. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
