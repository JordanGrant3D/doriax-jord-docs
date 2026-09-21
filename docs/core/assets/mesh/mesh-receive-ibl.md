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

## [Mesh](mesh.md).receiveIBL

Whether image-based lighting tints the character. A CharacterController script enables IBL when the hero steps into the sunlit courtyard so the armor picks up sky reflections.

```cpp
void setReceiveIBL(bool receiveIBL);
bool isReceiveIBL() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-receive-ibl.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-receive-ibl.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
