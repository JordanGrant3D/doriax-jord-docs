[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).operator*(const Vector3& v)

Rotates a direction vector (nVidia SDK cross-product formulation). Turns CharacterController's `camForward`/`camRight` basis without matrices.

```cpp
Vector3 operator*(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-operator-rotate.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-operator-rotate.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
