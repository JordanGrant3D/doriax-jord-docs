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

## [Texture](texture.md).isCubeMap()

Returns `true` for six-face skybox textures. Gate reflection-probe sampling on this before reading cube faces.

```cpp
bool isCubeMap() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-is-cube-map.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-is-cube-map.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
