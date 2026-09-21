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

## [Vector3](vector3.md).operator!=(const Vector3& v)

Component-wise inequality check. Returns `true` when any component differs. Useful to detect that a character has moved.

```cpp
bool operator!=(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-operator-not-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-operator-not-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
