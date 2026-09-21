---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Engine](engine.md).updateTime

Fixed-update interval in **seconds** driving `onFixedUpdate` and the physics simulation step. Also accepted in milliseconds via `setUpdateTimeMS`.

```cpp
static void setUpdateTime(float updateTime);
static float getUpdateTime();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-update-time.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-update-time.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
