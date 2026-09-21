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

## [Engine](engine.md).deltatime

Time elapsed in **seconds** since the last draw frame, clamped to `maxDeltatime`. Multiply movement speeds by `deltatime` inside `onUpdate` to make CharacterController motion frame-rate independent.

```cpp
static float getDeltatime();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-deltatime.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-deltatime.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
