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

## [Material](material.md).name

Human-readable material identifier, usually set automatically when loading a model from a GLTF file. CharacterController tags each team skin (`"hero_blue"`, `"hero_red"`) so the HUD can show which look is equipped.

```cpp
std::string name = "";
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-name.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-name.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
