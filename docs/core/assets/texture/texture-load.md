[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
