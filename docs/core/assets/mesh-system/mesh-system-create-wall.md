[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
MeshSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshSystem](mesh-system.md).createWall

Builds a vertical quad mesh. A CharacterController script raises the backdrop wall behind the character turntable so outfit swaps preview against a clean kit wall.

```cpp
void createWall(MeshComponent& mesh, float width=1, float height=1, unsigned int tiles=1);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-create-wall.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-create-wall.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
