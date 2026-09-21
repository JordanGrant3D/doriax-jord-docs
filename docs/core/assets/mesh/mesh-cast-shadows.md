[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).castShadows

Whether the character casts shadows. A CharacterController script disables casting for the distant LOD puppet while keeping it for the close-up hero mesh, checked via `isCastShadows`.

```cpp
void setCastShadows(bool castShadows);
bool isCastShadows() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-cast-shadows.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-cast-shadows.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
