[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
