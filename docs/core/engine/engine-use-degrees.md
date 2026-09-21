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

## [Engine](engine.md).useDegrees

When `true` (default), angle parameters in the API expect degrees. Set to `false` to use radians throughout.

```cpp
static void setUseDegrees(bool useDegrees);
static bool isUseDegrees();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-use-degrees.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-use-degrees.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
