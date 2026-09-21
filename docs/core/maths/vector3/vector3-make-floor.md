---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).makeFloor(const Vector3& v)

Component-wise minimum: each component becomes `min(component, v.component)`. Shrinks a bounds vector inward.

```cpp
void makeFloor(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-make-floor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-make-floor.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
