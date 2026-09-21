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

## [Mesh](mesh.md).updateInstance

Rewrites one instance in place. A CharacterController script slides substitute helmets down the bench with the position overload as players warm up.

```cpp
void updateInstance(size_t index, InstanceData instance);
void updateInstance(size_t index, Vector3 position);
void updateInstance(size_t index, float x, float y, float z);
void updateInstance(size_t index, Vector3 position, Quaternion rotation, Vector3 scale);
void updateInstance(size_t index, Vector3 position, Quaternion rotation, Vector3 scale, Vector4 color);
void updateInstance(size_t index, Vector3 position, Quaternion rotation, Vector3 scale, Vector4 color, Rect textureRect);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-update-instance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-update-instance.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
