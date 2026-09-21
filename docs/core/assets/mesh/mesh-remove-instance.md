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

## [Mesh](mesh.md).removeInstance

Deletes one instance by index. A CharacterController script removes the helmet instance of a sent-off player so the bench count matches the polygon budget.

```cpp
void removeInstance(size_t index);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-remove-instance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-remove-instance.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
