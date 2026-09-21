---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Texture](texture.md).load()

Forces an immediate CPU-side load from disk instead of waiting for first render. Call it during the loading screen to pre-warm CharacterController sprite sheets, then inspect the returned [TextureLoadResult](../texture-load-result/texture-load-result.md) `state`.

```cpp
TextureLoadResult load();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-load.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-load.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
