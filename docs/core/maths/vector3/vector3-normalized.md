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

## [Vector3](vector3.md).normalized()

Returns a normalized unit-length copy without modifying the original. Prefer this when you still need the unnormalized vector afterwards.

```cpp
Vector3 normalized() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-normalized.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-normalized.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
