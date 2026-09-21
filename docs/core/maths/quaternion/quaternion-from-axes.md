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

## [Quaternion](quaternion.md).fromAxes(const Vector3*) / fromAxes(xaxis, yaxis, zaxis)

Rebuilds from three basis vectors via a temp `Matrix4` + `fromRotationMatrix`. Converts a hand-built move basis (forward/right/up) into a facing.

```cpp
void fromAxes(const Vector3* akAxis);
void fromAxes(const Vector3& xaxis, const Vector3& yaxis, const Vector3& zaxis);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-from-axes.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-from-axes.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
