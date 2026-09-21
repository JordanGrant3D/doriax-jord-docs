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

## [Engine](engine.md).platform

The platform the engine is currently running on (`MacOS`, `iOS`, `Web`, `Android`, `Linux`, `Windows`).

```cpp
static Platform getPlatform();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-platform.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-platform.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
