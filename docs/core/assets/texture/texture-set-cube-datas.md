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

## [Texture](texture.md).setCubeDatas()

Builds a cube map from six in-memory [TextureData](../texture-data/texture-data.md) faces, e.g. runtime-tinted skybox variants. Like `setData`, this clears `releaseDataAfterLoad`.

```cpp
void setCubeDatas(const std::string& id, TextureData front, TextureData back, TextureData left, TextureData right, TextureData up, TextureData down);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-set-cube-datas.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-set-cube-datas.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
