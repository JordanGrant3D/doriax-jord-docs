---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
OBB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [OBB](obb.md).getAxisX() / getAxisY() / getAxisZ() / setAxes()

Read the three orthonormal local axes with `getAxisX` / `getAxisY` / `getAxisZ`, or replace them with `setAxes` — either as three axis vectors or as an orientation quaternion.

```cpp
const Vector3& getAxisX() const;
const Vector3& getAxisY() const;
const Vector3& getAxisZ() const;
void setAxes(const Vector3& axisX, const Vector3& axisY, const Vector3& axisZ);
void setAxes(const Quaternion& orientation);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-axes.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-axes.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
