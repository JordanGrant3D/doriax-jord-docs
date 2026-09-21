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

## [Engine](engine.md).textureStrategy

Automatic resizing of non-power-of-two textures on hardware that requires it (`FIT`, `RESIZE`, `NONE`).

```cpp
static void setTextureStrategy(TextureStrategy textureStrategy);
static TextureStrategy getTextureStrategy();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-texture-strategy.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-texture-strategy.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
