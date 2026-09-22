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

## [OBB](obb.md).transform()

Applies a transformation to the OBB, either as a matrix or as translate / rotate / scale components. Note it returns `void` (transforms in place), unlike `AABB::transform` which returns `AABB&`.

```cpp
void transform(const Matrix4& matrix);
void transform(const Vector3& translate, const Quaternion& rotate, const Vector3& scale);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-transform.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-transform.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
