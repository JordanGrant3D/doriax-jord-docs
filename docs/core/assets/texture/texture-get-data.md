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

## [Texture](texture.md).getData()

Returns the CPU pixel buffer (face `index` for cube maps). Only dereference it when `hasData()` is true; a present-but-unloaded sprite keeps a null data pointer.

```cpp
TextureData& getData(size_t index = 0) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-data.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-data.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
