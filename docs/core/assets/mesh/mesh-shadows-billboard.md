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

## [Mesh](mesh.md).shadowsBillboard

Whether the shadow pass treats the mesh as a billboard. A CharacterController script enables it for the nameplate quad above the hero so its blob shadow tracks the camera.

```cpp
void setShadowsBillboard(bool shadowsBillboard);
bool isShadowsBillboard() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-shadows-billboard.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-shadows-billboard.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
