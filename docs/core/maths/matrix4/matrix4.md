[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Matrix4

A 4x4 column-major world matrix (`matrix[col][row]`) carrying rotation, scale and
translation in one transform. CharacterController-style gameplay uses it to place
spawn points, yaw characters, chase with the camera and project with perspectives.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float)[4][4] | [**matrix**](matrix4-matrix.md) | Raw column-major entries (`matrix[col][row]`). |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Initializes to identity. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](matrix4.md)& matrix | Copy constructor. |
| 16 × [**float**](https://en.cppreference.com/cpp/keyword/float) entries | Constructs a matrix from sixteen entries in row-major argument order. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float)** matrix | Constructs a matrix by copying sixteen floats from a `float**` source buffer. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Matrix4**](matrix4.md)& | [**operator =**](matrix4-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](matrix4.md)& m | Copies all entries via `memcpy`. |
| [**Matrix4**](matrix4.md) | [**operator \***](matrix4-operator-multiply.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](matrix4.md)& m | Concatenates two world transforms. |
| [**Matrix4**](matrix4.md) | [**operator \***](matrix4-operator-multiply-scalar.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) scalar | Returns a scaled copy of the matrix. |
| [**Matrix4**](matrix4.md) | [**operator +**](matrix4-operator-add.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](matrix4.md)& m | Row-wise matrix addition. |
| [**Matrix4**](matrix4.md) | [**operator -**](matrix4-operator-subtract.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](matrix4.md)& m | Row-wise matrix subtraction. |
| [**Matrix4**](matrix4.md)& | [**operator \*=**](matrix4-operator-multiply-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](matrix4.md)& m | Concatenates another transform in place. |
| [**Matrix4**](matrix4.md)& | [**operator \*=**](matrix4-operator-multiply-assign-scalar.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) scalar | Scales every entry in place. |
| [**Vector3**](../vector3/vector3.md) | [**operator \***](matrix4-operator-transform-point.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& v | Transforms a position (with perspective divide). |
| [**Vector4**](../vector4/vector4.md) | [**operator \***](matrix4-operator-transform-vector.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& v | Transforms a homogeneous vector (no divide). |
| [**AABB**](../../../incomplete-docs.md) | [**operator \***](matrix4-operator-transform-aabb.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**AABB**](../../../incomplete-docs.md)& aabb | Transforms an AABB into world space. |
| [**OBB**](../../../incomplete-docs.md) | [**operator \***](matrix4-operator-transform-obb.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**OBB**](../../../incomplete-docs.md)& obb | Transforms an OBB into world space. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](matrix4-operator-index.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) iCol | Returns a column pointer for reading. |
| [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](matrix4-operator-index.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) iCol | Returns a column pointer for writing. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](matrix4-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](matrix4.md)& m | Byte-wise equality check via `memcmp`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](matrix4-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](matrix4.md)& m | Byte-wise inequality check via `memcmp`. |
| [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**operator float\***](matrix4-operator-float-ptr.md) |  | Casts to a raw `float*` buffer (e.g. uniform uploads). |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**operator const float\***](matrix4-operator-float-ptr.md) |  | Casts to a read-only raw `float*` buffer. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**set**](matrix4-set.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) col, [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) row, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) val | Writes a single entry. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**get**](matrix4-get.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) col, [**const**](https://en.cppreference.com/cpp/keyword/const) [**int**](https://en.cppreference.com/cpp/keyword/int) row | Reads a single entry. |
| [**Vector4**](../vector4/vector4.md) | [**row**](matrix4-row.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) row | Returns a row as a `Vector4`. |
| [**Vector4**](../vector4/vector4.md) | [**column**](matrix4-column.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) column | Returns a column as a `Vector4`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRow**](matrix4-set-row.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) row, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& vec | Overwrites a row from a `Vector4`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setColumn**](matrix4-set-column.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) column, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& vec | Overwrites a column from a `Vector4`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isValid**](matrix4-is-valid.md) |  | Checks that all sixteen entries are finite numbers. |
| [**Matrix4**](matrix4.md)& | [**identity**](matrix4-identity.md) |  | Resets to the identity matrix in place. |
| [**Matrix4**](matrix4.md)& | [**translateInPlace**](matrix4-translate-in-place.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) z | Shifts the translation column in place. |
| [**Matrix3**](../matrix3/matrix3.md) | [**linear**](matrix4-linear.md) |  | Extracts the upper-left 3x3 rotation/scale block. |
| [**Matrix4**](matrix4.md) | [**inverse**](matrix4-inverse.md) |  | Returns the inverted matrix (view matrix from a world matrix). |
| [**Matrix4**](matrix4.md) | [**transpose**](matrix4-transpose.md) |  | Returns the transposed matrix. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**determinant**](matrix4-determinant.md) |  | Returns the determinant (zero means non-invertible). |
| [**Matrix4**](matrix4.md) | [**translateMatrix**](matrix4-translate-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& position | Builds a translation matrix from a position (static). |
| [**Matrix4**](matrix4.md) | [**translateMatrix**](matrix4-translate-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) z | Builds a translation matrix from components (static). |
| [**Matrix4**](matrix4.md) | [**rotateMatrix**](matrix4-rotate-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& axis | Builds an axis-angle rotation matrix (static). |
| [**Matrix4**](matrix4.md) | [**rotateMatrix**](matrix4-rotate-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) azimuth, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) elevation | Builds a yaw/pitch rotation matrix (static). |
| [**Matrix4**](matrix4.md) | [**rotateXMatrix**](matrix4-rotate-x.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Builds a pitch rotation about X (static). |
| [**Matrix4**](matrix4.md) | [**rotateYMatrix**](matrix4-rotate-y.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Builds a yaw rotation about Y (static). |
| [**Matrix4**](matrix4.md) | [**rotateZMatrix**](matrix4-rotate-z.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Builds a roll rotation about Z (static). |
| [**Matrix4**](matrix4.md) | [**scaleMatrix**](matrix4-scale-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) sf | Builds a uniform scale matrix (static). |
| [**Matrix4**](matrix4.md) | [**scaleMatrix**](matrix4-scale-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& sf | Builds a per-axis scale matrix (static). |
| [**Matrix4**](matrix4.md) | [**lookAtMatrix**](matrix4-look-at.md) | [**Vector3**](../vector3/vector3.md) eye, [**Vector3**](../vector3/vector3.md) center, [**Vector3**](../vector3/vector3.md) up | Builds a chase-camera view matrix (static). |
| [**Matrix4**](matrix4.md) | [**reflectMatrix**](matrix4-reflect-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Plane**](../plane/plane.md)& plane | Builds a Householder mirror matrix for a plane (static). |
| [**Matrix4**](matrix4.md) | [**obliqueNearClip**](matrix4-oblique-near-clip.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& clipPlane | Replaces the depth row so the near plane lands on a clip plane. |
| [**Matrix4**](matrix4.md) | [**frustumMatrix**](matrix4-frustum.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) left, right, bottom, top, near, far | Builds an off-center perspective projection (static). |
| [**Matrix4**](matrix4.md) | [**orthoMatrix**](matrix4-ortho.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) left, right, bottom, top, near, far | Builds an orthographic projection (static). |
| [**Matrix4**](matrix4.md) | [**perspectiveMatrix**](matrix4-perspective.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) yfov, aspect, near, far | Builds a symmetric perspective projection (static). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**decomposeStandard**](matrix4-decompose-standard.md) | [**Vector3**](../vector3/vector3.md)& position, [**Vector3**](../vector3/vector3.md)& scale, [**Quaternion**](../quaternion/quaternion.md)& rotation | Splits into position, scale and rotation (Gram-Schmidt). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**decomposeQDU**](matrix4-decompose-qdu.md) | [**Vector3**](../vector3/vector3.md)& position, [**Vector3**](../vector3/vector3.md)& scale, [**Quaternion**](../quaternion/quaternion.md)& rotation | Splits into position, scale and rotation via QDU. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**decompose**](matrix4-decompose.md) | [**Vector3**](../vector3/vector3.md)& position, [**Vector3**](../vector3/vector3.md)& scale, [**Quaternion**](../quaternion/quaternion.md)& rotation | Splits into position, scale and rotation (calls `decomposeQDU`). |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**toString**](matrix4-to-string.md) |  | Returns a formatted string representation of the matrix. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
