[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Texture](texture.md).setData()

Builds a texture from in-memory pixels ([TextureData](../texture-data/texture-data.md)), e.g. a procedurally tinted CharacterController sprite. The `id` is a pool cache key, and this call clears `releaseDataAfterLoad` so the pixels stay available.

```cpp
void setData(const std::string& id, TextureData data);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-set-data.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-set-data.h"
```
