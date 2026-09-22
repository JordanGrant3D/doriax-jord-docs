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

## [OBB](obb.md).getCenter() / setCenter()

Read or move the center of the box without changing its size. Use it to slide a trigger volume so it follows a moving target.

```cpp
const Vector3& getCenter() const;
void setCenter(const Vector3& center);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-center.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-center.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
