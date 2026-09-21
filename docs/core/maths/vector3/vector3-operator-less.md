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

## [Vector3](vector3.md).operator<(const Vector3& v)

Strict component-wise less-than. Returns `true` only when `x < v.x && y < v.y && z < v.z`. Useful for inside-bounds checks.

```cpp
bool operator<(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-operator-less.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-operator-less.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
