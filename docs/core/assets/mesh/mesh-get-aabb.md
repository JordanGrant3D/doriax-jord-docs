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

## [Mesh](mesh.md).getAABB

Local-space bounds of the character mesh. A CharacterController script uses `getAABB` to size the outfit-swap preview pedestal so every kit fits the display case.

```cpp
AABB getAABB() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-get-aabb.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-get-aabb.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
