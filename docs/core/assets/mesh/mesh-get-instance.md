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

## [Mesh](mesh.md).getInstance

Returns a mutable reference to one roster instance. A CharacterController script grabs the captain's helmet instance to rewrite its transform after a formation change.

```cpp
InstanceData& getInstance(size_t index);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-get-instance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-get-instance.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
