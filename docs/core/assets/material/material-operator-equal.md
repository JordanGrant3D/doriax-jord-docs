---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Material
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Material](material.md).operator ==

Compares every factor, texture, UV set, alpha mode, and name for equality. CharacterController uses it to skip redundant `Mesh::setMaterial` calls when the team skin has not changed.

```cpp
bool operator == (const Material& other) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-operator-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
