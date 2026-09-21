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

## [Mesh](mesh.md).receiveShadows

Whether the character receives shadows from the arena. A CharacterController script keeps reception on so the hero grounds visually under the colonnade, logging `isReceiveShadows` during LOD checks.

```cpp
void setReceiveShadows(bool receiveShadows);
bool isReceiveShadows() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-receive-shadows.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-receive-shadows.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
