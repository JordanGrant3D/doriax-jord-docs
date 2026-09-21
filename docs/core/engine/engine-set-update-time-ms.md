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

## [Engine](engine.md).setUpdateTimeMS(unsigned int updateTimeMS)

Same as `updateTime` but accepts the fixed-update interval in **milliseconds**.

```cpp
static void setUpdateTimeMS(unsigned int updateTimeMS);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-set-update-time-ms.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-set-update-time-ms.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
