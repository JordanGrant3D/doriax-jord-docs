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

## [Mesh](mesh.md).instanceVisible

Per-instance visibility for benched teammates. A CharacterController script hides the helmet instance of any injured player by index and re-checks with `isInstanceVisible` before kickoff.

```cpp
bool isInstanceVisible(size_t index);
void setInstanceVisible(size_t index, bool visible) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-instance-visible.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-instance-visible.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
