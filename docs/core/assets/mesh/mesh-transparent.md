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

## [Mesh](mesh.md).transparent

Whether the character renders in the transparent pass. A CharacterController script flags the ghost-form outfit transparent so it sorts after opaque arena geometry.

```cpp
void setTransparent(bool transparent);
bool isTransparent() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-transparent.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-transparent.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
