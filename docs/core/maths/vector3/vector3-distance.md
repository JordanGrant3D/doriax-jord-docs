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

## [Vector3](vector3.md).distance(const Vector3& rhs)

Euclidean distance to another point: `( *this - rhs ).length()`. Use it for arrival, pickup radius, and chase ranges.

```cpp
float distance(const Vector3& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-distance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-distance.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
