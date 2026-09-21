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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
