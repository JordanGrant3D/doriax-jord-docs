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
