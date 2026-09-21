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

## [Matrix4](matrix4.md).translateMatrix(const Vector3&) / translateMatrix(float, float, float)

Static translation builders from a position vector or raw components. Places spawn points and camera rigs without touching rotation.

```cpp
static Matrix4 translateMatrix(const Vector3& position);
static Matrix4 translateMatrix(const float x, const float y, const float z);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-translate-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-translate-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
