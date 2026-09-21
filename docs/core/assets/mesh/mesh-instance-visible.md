[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
