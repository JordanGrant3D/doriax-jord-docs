[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Quaternion

A `(w, x, y, z)` rotation (stored `w` first). CharacterController drives cameras and
character facing with it: `camRot.fromEulerAngles(camPitch, camYaw, 0, YXZ)` and
`Quaternion::slerp(t, current, target)` turns.

## Static Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Quaternion**](quaternion.md) | [**IDENTITY**](quaternion-identity.md) | Shorthand for writing `Quaternion(1, 0, 0, 0)` (no rotation). |

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**w**](quaternion-w.md) | Scalar component (cosine of half the angle). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**x**](quaternion-x.md) | X component of the vector part (axis × sine). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**y**](quaternion-y.md) | Y component of the vector part (axis × sine). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**z**](quaternion-z.md) | Z component of the vector part (axis × sine). |

## Enum

| Type | Value | Description |
| :--- | :--- | :--- |
| **RotationOrder** | `XYZ`, `XZY`, `YXZ`, `YZX`, `ZXY`, `ZYX` | Euler application order for [fromEulerAngles](quaternion-from-euler-angles.md) / [getEulerAngles](quaternion-get-euler-angles.md). See [RotationOrder](quaternion-rotation-order.md). |

## Constructors

| Arguments | Description |
| :--- | :--- |
| | Default constructor. Initializes to identity `(1, 0, 0, 0)`. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& rhs | Copy constructor. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) fW, fX, fY, fZ | Constructs a quaternion from raw components. |
| [**float**](https://en.cppreference.com/cpp/keyword/float)* [**const**](https://en.cppreference.com/cpp/keyword/const) r | Constructs a quaternion from a 4-float array. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) xAngle, yAngle, zAngle | Constructs a quaternion from euler angles (`ZYX` order). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) xAngle, yAngle, zAngle, [**const**](https://en.cppreference.com/cpp/keyword/const) **RotationOrder**& order | Constructs a quaternion from euler angles with an explicit order. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)* akAxis | Constructs a quaternion from three axis vectors. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& xaxis, yaxis, zaxis | Constructs a quaternion from three axis vectors. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkAxis | Constructs a quaternion from an angle and axis. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](../matrix3/matrix3.md)& kRot | Constructs a quaternion from a 3x3 rotation matrix. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](../matrix4/matrix4.md)& kRot | Constructs a quaternion from a 4x4 rotation matrix. |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](quaternion-operator-index.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**size_t**](https://en.cppreference.com/cpp/types/size_t) i | Returns component value by index (0: w, 1: x, 2: y, 3: z). |
| [**float&**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](quaternion-operator-index.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**size_t**](https://en.cppreference.com/cpp/keyword/size_t) i | Returns a reference to component by index. |
| [**Quaternion**](quaternion.md)& | [**operator =**](quaternion-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& rkQ | Assigns values from another quaternion. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](quaternion-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& rhs | Exact component-wise equality check. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](quaternion-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& rhs | Exact component-wise inequality check. |
| [**Quaternion**](quaternion.md) | [**operator +**](quaternion-operator-add.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& rhs | Component-wise addition (blend math, not rotation). |
| [**Quaternion**](quaternion.md) | [**operator -**](quaternion-operator-subtract.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& rhs | Component-wise subtraction (blend math, not rotation). |
| [**Quaternion**](quaternion.md) | [**operator \***](quaternion-operator-multiply-scalar.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) fScalar | Scales every component (blend math, not rotation). |
| [**Quaternion**](quaternion.md) | [**operator \***](quaternion-operator-multiply.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& rhs | Concatenates two rotations (apply `rhs` first). |
| [**Vector3**](../vector3/vector3.md) | [**operator \***](quaternion-operator-rotate.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& v | Rotates a direction vector (nVidia SDK formulation). |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& | [**operator +**](quaternion-operator-add.md) | | Unary positive operator (returns itself). |
| [**Quaternion**](quaternion.md) | [**operator -**](quaternion-operator-negate.md) | | Negates every component (same rotation, flipped hypersphere side). |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**ptr**](quaternion-ptr.md) | | Returns a writable pointer to `w` (four contiguous floats). |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**ptr**](quaternion-ptr.md) | | Returns a read-only pointer to `w`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**swap**](quaternion-swap.md) | [**Quaternion**](quaternion.md)& other | Exchanges all components with another quaternion. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fromEulerAngles**](quaternion-from-euler-angles.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) xAngle, yAngle, zAngle, [**const**](https://en.cppreference.com/cpp/keyword/const) **RotationOrder**& order | Rebuilds from euler angles (camera look rotation). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fromAxes**](quaternion-from-axes.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)* akAxis | Rebuilds from three axis vectors via a temp matrix. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fromAxes**](quaternion-from-axes.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& xaxis, yaxis, zaxis | Rebuilds from three axis vectors via a temp matrix. |
| [**Quaternion**](quaternion.md)& | [**fromRotationMatrix**](quaternion-from-rotation-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix3**](../matrix3/matrix3.md)& kRot | Rebuilds from a 3x3 rotation matrix (trace branches). |
| [**Quaternion**](quaternion.md)& | [**fromRotationMatrix**](quaternion-from-rotation-matrix.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Matrix4**](../matrix4/matrix4.md)& kRot | Rebuilds from a 4x4 rotation matrix (via `linear()`). |
| [**Matrix4**](../matrix4/matrix4.md) | [**getRotationMatrix**](quaternion-get-rotation-matrix.md) | | Converts to a 4x4 rotation matrix. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fromAngle**](quaternion-from-angle.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Rebuilds as a Z-axis spin (calls `fromAngleAxis` with `(0, 0, 1)`). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fromAngleAxis**](quaternion-from-angle-axis.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) angle, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector3**](../vector3/vector3.md)& rkAxis | Rebuilds from an angle and axis (half-angle sine form). |
| [**Vector3**](../vector3/vector3.md) | [**getEulerAngles**](quaternion-get-euler-angles.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) **RotationOrder**& order | Extracts euler angles, with gimbal-lock fallbacks. |
| [**Vector3**](../vector3/vector3.md) | [**xAxis**](quaternion-x-axis.md) | | Returns the rotated local X (right) axis. |
| [**Vector3**](../vector3/vector3.md) | [**yAxis**](quaternion-y-axis.md) | | Returns the rotated local Y (up) axis. |
| [**Vector3**](../vector3/vector3.md) | [**zAxis**](quaternion-z-axis.md) | | Returns the rotated local Z (forward) axis. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**dot**](quaternion-dot.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& rkQ | Four-component dot product (pose similarity). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**norm**](quaternion-norm.md) | | Squared length (`w²+x²+y²+z²`; 1 for unit rotations). |
| [**Quaternion**](quaternion.md) | [**inverse**](quaternion-inverse.md) | | Full inverse (conjugate over norm; `NULL` when degenerate). |
| [**Quaternion**](quaternion.md) | [**unitInverse**](quaternion-unit-inverse.md) | | Conjugate (`w,-x,-y,-z`): the inverse for unit quaternions. |
| [**Quaternion**](quaternion.md) | [**exp**](quaternion-exp.md) | | Quaternion exponential (angular-velocity integration step). |
| [**Quaternion**](quaternion.md) | [**log**](quaternion-log.md) | | Quaternion logarithm (inverse of `exp`). |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**equals**](quaternion-equals.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& rhs | Fuzzy equality: `|dot − 1| < 0.001` (handles double-cover). |
| [**Quaternion**](quaternion.md) | [**slerp**](quaternion-slerp.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) t, [**const**](https://en.cppreference.com/cpp/keyword/const) [**Quaternion**](quaternion.md)& q1, q2 | Spherical interpolation with shortest path (static). |
| [**Quaternion**](quaternion.md) | [**slerp**](quaternion-slerp.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) t, q1, q2, [**bool**](https://en.cppreference.com/cpp/keyword/bool) shortestPath | Spherical interpolation with optional path flip (static). |
| [**Quaternion**](quaternion.md) | [**slerpExtraSpins**](quaternion-slerp-extra-spins.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) fT, rkP, rkQ, [**int**](https://en.cppreference.com/cpp/keyword/int) iExtraSpins | Slerp plus extra spins for multi-turn blends (static). |
| [**Quaternion**](quaternion.md) | [**nlerp**](quaternion-nlerp.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) fT, rkP, rkQ | Cheap normalized lerp, no shortest path (static). |
| [**Quaternion**](quaternion.md) | [**nlerp**](quaternion-nlerp.md) | fT, rkP, rkQ, [**bool**](https://en.cppreference.com/cpp/keyword/bool) shortestPath | Cheap normalized lerp with optional path flip (static). |
| [**Quaternion**](quaternion.md) | [**squad**](quaternion-squad.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) fT, rkP, rkA, rkB, rkQ | Smooth cubic blend through control points (static). |
| [**Quaternion**](quaternion.md)& | [**normalize**](quaternion-normalize.md) | | Normalizes in place and returns a reference to itself. |
| [**Quaternion**](quaternion.md) | [**normalized**](quaternion-normalized.md) | | Returns a normalized copy without modifying the original. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**normalizeL**](quaternion-normalize-l.md) | | Normalizes in place and returns the pre-normalization norm. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getRoll**](quaternion-get-roll.md) | | Extracts the roll angle (engine-default units). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getPitch**](quaternion-get-pitch.md) | | Extracts the pitch angle (engine-default units). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getYaw**](quaternion-get-yaw.md) | | Extracts the yaw angle (engine-default units). |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**toString**](quaternion-to-string.md) | | Returns a formatted string representation of the quaternion. |
