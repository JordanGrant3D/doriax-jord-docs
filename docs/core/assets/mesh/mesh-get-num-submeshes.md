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

## [Mesh](mesh.md).getNumSubmeshes

Count of armor submeshes (body, helmet, pads). A CharacterController script reads it before looping outfit-swap assignments so a new kit never indexes past the last submesh.

```cpp
unsigned int getNumSubmeshes() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-get-num-submeshes.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-get-num-submeshes.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
