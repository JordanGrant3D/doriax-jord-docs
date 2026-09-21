---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Animation
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Animation](animation.md).start()

Starts the clip with a fade-in ramp of `fadeInDuration` seconds (equivalent to `fadeIn`). The base `Action::start()` overload without arguments remains visible alongside this overload and starts the clip instantly at full weight.

```cpp
void start(float fadeInDuration);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-start.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-start.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
