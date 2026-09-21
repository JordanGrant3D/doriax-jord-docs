---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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
