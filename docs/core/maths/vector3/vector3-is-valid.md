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

## [Vector3](vector3.md).isValid()

Returns `true` when `x`, `y` and `z` are all finite (`std::isfinite`). Guard physics/velocity values before applying them.

```cpp
bool isValid() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-is-valid.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-is-valid.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
