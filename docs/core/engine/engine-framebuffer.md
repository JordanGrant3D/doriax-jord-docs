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

## [Engine](engine.md).framebuffer

Off-screen render target for the full frame output. When set, the engine renders to this framebuffer instead of the window surface.

```cpp
static void setFramebuffer(Framebuffer* framebuffer);
static Framebuffer* getFramebuffer();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-framebuffer.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-framebuffer.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
