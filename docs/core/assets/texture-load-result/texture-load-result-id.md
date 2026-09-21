[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureLoadResult
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureLoadResult](texture-load-result.md).id

Id (pool cache key) the loader resolved, e.g. the sprite-sheet path or the scale-tagged SVG id.

```cpp
std::string id;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-load-result/texture-load-result-id.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-load-result/texture-load-result-id.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
