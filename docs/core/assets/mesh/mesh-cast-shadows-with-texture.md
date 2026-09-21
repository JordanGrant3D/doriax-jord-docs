---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).castShadowsWithTexture

Whether the alpha-tested outfit texture shapes the shadow (hair cards, grilles). A CharacterController script enables it on the hair submesh so braids cast patterned shadows, and checks `isCastShadowsWithTexture` before the LOD swap.

```cpp
void setCastShadowsWithTexture(bool castShadowsWithTexture);
bool isCastShadowsWithTexture() const;
void setCastShadowsWithTexture(unsigned int submesh, bool castShadowsWithTexture);
bool isCastShadowsWithTexture(unsigned int submesh) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-cast-shadows-with-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-cast-shadows-with-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
