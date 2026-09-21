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

## [Engine](engine.md).isViewLoaded()

Returns `true` after the graphics surface is ready (after `onViewLoaded` fires).

```cpp
static bool isViewLoaded();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-is-view-loaded.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-is-view-loaded.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
