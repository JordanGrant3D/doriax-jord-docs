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

## [Vector3](vector3.md).operator/(float f)

Scalar division. Returns a new vector with each component divided by `f` (implemented as multiply by `1/f`).

```cpp
Vector3 operator/(float f) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-operator-divide.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-operator-divide.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
