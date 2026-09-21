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

## [MeshSystem](mesh-system.md).loadGLTF

Loads a GLTF/GLB kit model onto an entity. A CharacterController script streams the away kit asynchronously during halftime so the outfit swap never hitches the match.

```cpp
bool loadGLTF(Entity entity, const std::string filename, bool asyncLoad=false, bool skipEntities=false, bool changeRootTransform=true);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-load-gltf.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-load-gltf.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
