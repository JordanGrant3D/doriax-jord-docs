---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Joint2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Joint2D](joint-2d.md).getType()

Returns which `set*` configuration is active (`DISTANCE`, `REVOLUTE`, `PRISMATIC`, `MOUSE`, `WHEEL`, `WELD`, `MOTOR`). Useful for debugging joint setup on platforms and doors.

```cpp
Joint2DType getType();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-get-type.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-get-type.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
