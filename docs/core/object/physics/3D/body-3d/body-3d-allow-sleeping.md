---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body3D](body-3d.md).allowSleeping

Whether the body may fall asleep when idle. Disable it for player characters so input never waits on a wake-up.

```cpp
bool isAllowSleeping() const;
void setAllowSleeping(bool allowSleeping);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-allow-sleeping.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-allow-sleeping.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
