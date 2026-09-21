[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureLoadResult
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureLoadResult](texture-load-result.md).data

Decoded face buffers (index `0` for 2D sprites). Null when the load failed; keep it alive to sample minimap pixels on the CPU.

```cpp
std::shared_ptr<std::array<TextureData, 6>> data = nullptr;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-load-result/texture-load-result-data.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-load-result/texture-load-result-data.h"
```
