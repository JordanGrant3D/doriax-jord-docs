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

## [Mesh](mesh.md).castShadows

Whether the character casts shadows. A CharacterController script disables casting for the distant LOD puppet while keeping it for the close-up hero mesh, checked via `isCastShadows`.

```cpp
void setCastShadows(bool castShadows);
bool isCastShadows() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-cast-shadows.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-cast-shadows.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
